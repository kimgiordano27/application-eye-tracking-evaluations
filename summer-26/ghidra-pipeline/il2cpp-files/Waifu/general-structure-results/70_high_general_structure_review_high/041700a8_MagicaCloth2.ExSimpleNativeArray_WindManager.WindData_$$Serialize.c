/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<WindManager.WindData>$$Serialize
ENTRY_POINT: 041700a8
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint MagicaCloth2_ExSimpleNativeArray<WindManager_WindData>__Serialize(uint param_1)

{
  byte bVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint in_w16;
  ulong uVar8;
  void *__dest;
  size_t unaff_x23;
  void *unaff_x24;
  uint uVar9;
  void *__s;
  long unaff_x29;
  
  if (0 < (int)param_1) {
    uVar3 = 0;
    uVar9 = 0;
    do {
      iVar6 = 0;
      uVar4 = 1 << (ulong)(uVar3 & 0x1f);
      do {
        if ((uVar4 & *(ushort *)(unaff_x29 + -0x30 + (long)iVar6 * 2)) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (uint)((uVar4 & *(ushort *)(unaff_x29 + -0x30 + (long)(iVar6 + 1) * 2)) != 0);
        }
        iVar6 = iVar6 + 2;
        uVar9 = uVar7 << (ulong)(uVar3 & 0x1f) | uVar9;
      } while (iVar6 < (int)param_1);
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_1);
    if (0 < (int)param_1) {
      __s = *(void **)(unaff_x29 + -0xb0);
      __dest = *(void **)(unaff_x29 + -0x70);
      uVar8 = 0;
      bVar1 = 0;
      uVar3 = 0;
      *(uint *)(unaff_x29 + -0x58) = ~uVar9;
      do {
        uVar4 = (uint)uVar8;
        if ((in_w16 >> 4 & 1) == 0) {
          uVar4 = 1 << (ulong)(uVar4 & 0x1f) & uVar9;
        }
        else {
          if ((in_w16 >> 5 & 1) == 0) {
            uVar7 = *(uint *)(unaff_x29 + -0x58);
            uVar4 = 1 << (ulong)(uVar4 & 0x1f);
          }
          else {
            plVar2 = (long *)(*(code *)**(undefined8 **)
                                         (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x38) + 0x10))();
            memcpy(unaff_x24,*(void **)(unaff_x29 + -0x90),unaff_x23);
            memset(__s,0,unaff_x23);
            memcpy(__dest,__s,unaff_x23);
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
            lVar5 = *plVar2;
            *(void **)(unaff_x29 + -0x48) = unaff_x24;
            *(void **)(unaff_x29 + -0x40) = __dest;
            lVar5 = *(long *)(lVar5 + 0x1c0);
            (**(code **)(lVar5 + 0x10))
                      (*(undefined8 *)(lVar5 + 8),lVar5,plVar2,unaff_x29 + -0x48,unaff_x29 + -0x34);
            uVar4 = 1 << (ulong)(uVar4 & 0x1f);
            if (!(bool)(*(char *)(unaff_x29 + -0x34) == '\0' & (bVar1 ^ 1))) {
              in_w16 = *(uint *)(unaff_x29 + -0xa4);
              uVar4 = uVar4 & uVar9;
              bVar1 = 1;
              goto LAB_04170204;
            }
            uVar7 = *(uint *)(unaff_x29 + -0x58);
            in_w16 = *(uint *)(unaff_x29 + -0xa4);
            bVar1 = 0;
          }
          uVar4 = uVar4 & uVar7;
        }
LAB_04170204:
        uVar3 = uVar4 | uVar3;
        uVar8 = uVar8 + 1;
        *(long *)(unaff_x29 + -0x90) = *(long *)(unaff_x29 + -0x90) + *(long *)(unaff_x29 + -0x50);
      } while (param_1 != uVar8);
      goto LAB_0417022c;
    }
  }
  uVar3 = 0;
LAB_0417022c:
  if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


