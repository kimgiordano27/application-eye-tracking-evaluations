/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<TrackerCoroutine>d__95$$System.IDisposable.Dispose
ENTRY_POINT: 04c4efa8
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK_<TrackerCoroutine>d__95__System_IDisposable_Dispose(code *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  (*param_1)();
  plVar6 = *(long **)(unaff_x19 + 0x50);
  lVar1 = thunk_FUN_02cea894(*unaff_x23);
  FUN_04c2c1d8(lVar1,0);
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)PTR_DAT_065e6f10;
    *(undefined1 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x10) = uVar7;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x28) = *unaff_x25;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
            goto LAB_04c4f044;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c4f044:
      (*(code *)*puVar2)(plVar6,uVar7,lVar1,puVar2[1]);
      plVar6 = *(long **)(unaff_x19 + 0x50);
      lVar1 = thunk_FUN_02cea894(*unaff_x23);
      FUN_04c2c1d8(lVar1,0);
      if (lVar1 != 0) {
        uVar7 = *(undefined8 *)PTR_DAT_065e6a08;
        *(undefined1 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = uVar7;
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x28) = *unaff_x25;
        *(undefined8 *)(lVar1 + 0x30) = 0;
        if (plVar6 != (long *)0x0) {
          lVar3 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *unaff_x24) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                goto LAB_04c4f0e4;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c4f0e4:
                    /* WARNING: Could not recover jumptable at 0x04c4f104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar2)(plVar6,uVar7,lVar1,puVar2[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


