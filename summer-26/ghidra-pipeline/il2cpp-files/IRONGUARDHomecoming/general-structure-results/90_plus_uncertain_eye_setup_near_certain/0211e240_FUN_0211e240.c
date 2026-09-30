/*
FUNCTION_NAME: FUN_0211e240
ENTRY_POINT: 0211e240
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 192
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_4
*/


int FUN_0211e240(long *param_1,ulong param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  
  if ((DAT_0482fc98 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__
                      );
    DAT_0482fc98 = 1;
  }
  puVar5 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__;
  if (param_1 != (long *)0x0) {
    if (*param_1 == *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__) {
      iVar15 = 0;
      bVar4 = false;
      bVar3 = true;
      plVar13 = param_1;
      goto LAB_0211e328;
    }
    if (*param_1 == *(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__) {
      piVar6 = (int *)thunk_FUN_01f11920(param_1);
      iVar15 = *piVar6;
      bVar3 = false;
      bVar4 = true;
      plVar13 = (long *)0x0;
      goto LAB_0211e328;
    }
  }
  iVar15 = 0;
  bVar4 = false;
  bVar3 = false;
  plVar13 = (long *)0x0;
LAB_0211e328:
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar7 = *(long *)puVar5;
  }
  uVar1 = *(uint *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if ((int)uVar1 < 1) {
    return 0;
  }
  uVar12 = 0;
  iVar14 = 0;
  do {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar7 = *(long *)puVar5;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x48);
    if (lVar7 == 0) goto LAB_0211e498;
    if (*(uint *)(lVar7 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
    if (lVar7 != 0) {
      if (bVar3) {
        if ((*(long *)(lVar7 + 0x38) != 0) &&
           (uVar8 = FUN_0340e600(*(long *)(lVar7 + 0x38),plVar13,0), (uVar8 & 1) == 0))
        goto LAB_0211e3dc;
      }
      else if (bVar4) {
        if (*(int *)(lVar7 + 0x40) == iVar15) {
LAB_0211e3dc:
          if ((((param_2 & 1) == 0) || (*(char *)(lVar7 + 0x110) != '\0')) &&
             (iVar14 = iVar14 + 1, (param_3 & 1) != 0)) {
            if (param_4 == 0) {
LAB_0211e498:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar10 = *(long *)(param_4 + 0x10);
            lVar11 = *(long *)
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
            ;
            *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_0211e498;
            uVar2 = *(uint *)(param_4 + 0x18);
            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(param_4 + 0x18) = uVar2 + 1;
              plVar9 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
              *plVar9 = lVar7;
              thunk_FUN_01f51358(plVar9,lVar7);
            }
            else {
              FUN_030f2bb4(param_4,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
      else if ((*(long *)(lVar7 + 0x30) != 0) &&
              (uVar8 = FUN_035baa7c(param_1,*(long *)(lVar7 + 0x30),0), (uVar8 & 1) != 0))
      goto LAB_0211e3dc;
    }
    if ((ulong)uVar1 - 1 == uVar12) {
      return iVar14;
    }
    lVar7 = *(long *)puVar5;
    uVar12 = uVar12 + 1;
  } while( true );
}


