/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<float3>$$Deserialize
ENTRY_POINT: 04166a70
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long * MagicaCloth2_ExSimpleNativeArray<float3>__Deserialize(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long in_x9;
  long unaff_x19;
  size_t unaff_x21;
  int unaff_w23;
  byte unaff_w25;
  long unaff_x26;
  ulong uVar10;
  long unaff_x29;
  
  if (unaff_w23 == -1) {
    plVar6 = (long *)0x0;
  }
  else {
    lVar4 = FUN_041677b8();
    if (lVar4 == 0) {
LAB_04166c18:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar5 = **(long **)(unaff_x19 + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    plVar6 = (long *)FUN_03398188(lVar5,*(undefined4 *)(lVar4 + 0x18));
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar10 = 0;
      uVar9 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      *(long *)(unaff_x29 + -0x30) = unaff_x26;
      do {
        if (uVar9 <= uVar10) {
LAB_04166c14:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        puVar8 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8);
        uVar7 = *puVar8;
        *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(lVar4 + uVar10 * 4 + 0x20);
        *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0xc;
        *(byte *)(unaff_x29 + -0x10) = unaff_w25 & 1;
        *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x10;
        *(void **)(unaff_x29 + -0x18) = (void *)(param_1 - in_x9);
        (*(code *)puVar8[2])(uVar7);
        if (plVar6 == (long *)0x0) goto LAB_04166c18;
        uVar9 = (ulong)*(uint *)(plVar6 + 3);
        if (uVar9 <= uVar10) goto LAB_04166c14;
        memcpy((void *)((long)plVar6 + uVar10 * *(uint *)(*plVar6 + 0x104) + 0x20),
               (void *)(param_1 - in_x9),unaff_x21);
        if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x10) + 0x135) & 1) == 0) {
          FUN_0338f618();
          uVar9 = (ulong)*(uint *)(plVar6 + 3);
        }
        if (uVar9 <= uVar10) goto LAB_04166c14;
        if (DAT_08908cd0 != 0) {
          uVar9 = (long)plVar6 + uVar10 * *(uint *)(*plVar6 + 0x104) + 0x20;
          puVar1 = &DAT_0873ccb0 + (uVar9 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << (uVar9 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar9 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar4 + 0x18));
      unaff_x26 = *(long *)(unaff_x29 + -0x30);
    }
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


