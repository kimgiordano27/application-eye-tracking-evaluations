/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AddByteOffset<quaternion>
ENTRY_POINT: 03ecfa04
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__AddByteOffset<quaternion>(void)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x21;
  long unaff_x22;
  
  plVar1 = (long *)thunk_FUN_0322f04c();
  if ((plVar1 == (long *)0x0) || (lVar2 = thunk_FUN_0322f04c(), lVar2 == 0)) {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_0322bef4(lVar2);
    }
    plVar1 = (long *)thunk_FUN_0322f04c();
    if ((plVar1 == (long *)0x0) || (lVar2 = thunk_FUN_0322f04c(), lVar2 == 0)) {
      lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        FUN_0322bef4(lVar2);
      }
      plVar1 = (long *)thunk_FUN_0322f04c();
      if ((plVar1 == (long *)0x0) || (lVar2 = thunk_FUN_0322f04c(), lVar2 == 0)) {
        lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          FUN_0322bef4(lVar2);
        }
        plVar1 = (long *)thunk_FUN_0322f04c();
        if ((plVar1 == (long *)0x0) || (lVar2 = thunk_FUN_0322f04c(), lVar2 == 0)) {
          lVar2 = **(long **)(unaff_x22 + 0x38);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_0322bef4(lVar2);
          }
          lVar4 = *unaff_x21;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == lVar2) {
                puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                goto 
                System_Runtime_CompilerServices_Unsafe__AddByteOffset<Painter2D_Painter2DJobData>;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_0322c1e8();
System_Runtime_CompilerServices_Unsafe__AddByteOffset<Painter2D_Painter2DJobData>:
          UNRECOVERED_JUMPTABLE = (code *)*puVar3;
          goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4s>;
        }
        lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4(lVar2);
        }
        lVar4 = *plVar1;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar2) goto LAB_03ecfc44;
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
      }
      else {
        lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4(lVar2);
        }
        lVar4 = *plVar1;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar2) goto LAB_03ecfc44;
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
      }
    }
    else {
      lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4(lVar2);
      }
      lVar4 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar2) goto LAB_03ecfc44;
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
    }
  }
  else {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4(lVar2);
    }
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) goto LAB_03ecfc44;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  puVar3 = (undefined8 *)FUN_0322c1e8(plVar1,lVar2,0);
LAB_03ecfc50:
  UNRECOVERED_JUMPTABLE = (code *)*puVar3;
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4s>:
                    /* WARNING: Could not recover jumptable at 0x03ecfc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
LAB_03ecfc44:
  puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
  goto LAB_03ecfc50;
}


