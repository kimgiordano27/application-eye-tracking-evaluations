/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 0300eb38
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_VirtualKeyboardModelAnimationState>
               (void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == **(long **)(in_x10 + 0xa48)) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0300eb88;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_0300eb88:
  (*(code *)*puVar1)();
  plVar5 = *(long **)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_065c8d08) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0300ebf4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065c8d08,0);
LAB_0300ebf4:
    uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    if ((uVar3 & 1) != 0) {
      plVar5 = *(long **)(unaff_x20 + 0x20);
      if (plVar5 == (long *)0x0) {
LAB_0300ed14:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_065cdc20) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0300ec70;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065cdc20,0);
LAB_0300ec70:
      lVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
      *(long *)(unaff_x20 + 0x30) = lVar2;
      if (lVar2 != 0) {
        fVar6 = (float)FUN_05efe7dc(0);
        plVar5 = *(long **)(unaff_x20 + 0x30);
        if (plVar5 == (long *)0x0) goto LAB_0300ed14;
        lVar2 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_065cdc18) {
              puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_0300ecec;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065cdc18,0);
LAB_0300ecec:
        fVar7 = (float)(*(code *)*puVar1)(plVar5,puVar1[1]);
        *(float *)(unaff_x20 + 0x28) = fVar6 + fVar7;
      }
      goto LAB_0300ed00;
    }
  }
  FUN_0300ed18();
LAB_0300ed00:
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x19;
  return;
}


