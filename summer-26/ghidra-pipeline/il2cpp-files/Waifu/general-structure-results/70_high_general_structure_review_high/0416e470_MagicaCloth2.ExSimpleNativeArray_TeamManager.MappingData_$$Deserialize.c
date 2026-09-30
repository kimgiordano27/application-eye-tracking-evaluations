/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<TeamManager.MappingData>$$Deserialize
ENTRY_POINT: 0416e470
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void MagicaCloth2_ExSimpleNativeArray<TeamManager_MappingData>__Deserialize(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *__s;
  uint unaff_w23;
  void *__dest;
  int unaff_w24;
  ulong uVar8;
  size_t unaff_x26;
  void *unaff_x27;
  void *__dest_00;
  long unaff_x29;
  
  __dest_00 = (void *)(param_1 - in_x9);
  __s = (void *)((long)__dest_00 - in_x9);
  memset(__s,0,unaff_x21);
  memset(__s,0,unaff_x21);
  if (0 < (int)unaff_w23) {
    uVar8 = 0;
    *(long *)(unaff_x29 + -0x50) = (long)unaff_w24;
    *(long *)(unaff_x29 + -0x48) = (long)(int)*(undefined8 *)(unaff_x29 + -0x28);
    do {
      iVar2 = *(int *)(*(long *)(unaff_x29 + -0x20) + uVar8 * 4);
      if (unaff_x20 == 0) {
LAB_0416e524:
        memcpy(unaff_x27,
               (void *)(*(long *)(unaff_x29 + -0x38) + (long)iVar2 * *(long *)(unaff_x29 + -0x50)),
               unaff_x26);
        __dest = (void *)(*(long *)(unaff_x29 + -0x40) + uVar8 * (long)(int)unaff_x26);
        memcpy(__dest,unaff_x27,unaff_x26);
        if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
          FUN_0338f618();
        }
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)__dest >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)__dest >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      else {
        memcpy(__dest_00,__s,*(size_t *)(unaff_x29 + -0x28));
        plVar7 = *(long **)(unaff_x19 + 0x38);
        lVar5 = *plVar7;
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0338f618();
          plVar7 = *(long **)(unaff_x19 + 0x38);
        }
        lVar6 = plVar7[3];
        *(void **)(unaff_x29 + -0x18) = __dest_00;
        FUN_033d24a0(lVar5,lVar6,*(undefined8 *)(unaff_x29 + -0x30),
                     unaff_x20 + uVar8 * *(long *)(unaff_x29 + -0x48),unaff_x29 + -0x18,
                     unaff_x29 + -0xc);
        if (*(int *)(unaff_x29 + -0xc) < 0) goto LAB_0416e524;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != unaff_w23);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


