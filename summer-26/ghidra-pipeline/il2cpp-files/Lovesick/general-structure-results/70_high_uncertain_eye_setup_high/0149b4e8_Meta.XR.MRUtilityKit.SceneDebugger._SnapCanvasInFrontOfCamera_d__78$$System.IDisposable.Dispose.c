/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger.<SnapCanvasInFrontOfCamera>d__78$$System.IDisposable.Dispose
ENTRY_POINT: 0149b4e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0149b720) */

uint Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>d__78__System_IDisposable_Dispose
               (code *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000000;
  
  do {
    lVar2 = (*param_1)();
    lVar3 = *unaff_x28;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x28;
    }
    lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar6 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar3);
        lVar3 = *unaff_x28;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*unaff_x25);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01267c10(lVar6,uVar7,*unaff_x26,0);
      *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10) = lVar6;
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0132508c(lVar2,lVar6,*unaff_x27);
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0149b488;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_00d59724();
LAB_0149b488:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) break;
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0149b4e4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_00d59724();
LAB_0149b4e4:
    param_1 = (code *)*puVar1;
  } while( true );
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_10310) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0149b5d8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_00d59724();
LAB_0149b5d8:
    (*(code *)*puVar1)();
  }
  return in_stack_00000000._4_4_ & 1;
}


