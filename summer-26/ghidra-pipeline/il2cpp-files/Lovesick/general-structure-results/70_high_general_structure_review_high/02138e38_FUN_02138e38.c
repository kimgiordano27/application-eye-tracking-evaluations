/*
FUNCTION_NAME: FUN_02138e38
ENTRY_POINT: 02138e38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02138e38(int param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  ulong *puVar10;
  long lVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined8 local_50;
  undefined8 local_48;
  
  puVar2 = SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo;
                    /* try { // try from 02138e3c to 02238e43 has its CatchHandler @ 02138e44 */
                    /* catch() { ... } // from try @ 02138e24 with catch @ 02138e44
                       catch() { ... } // from try @ 02138e3c with catch @ 02138e44 */
  if ((DAT_03781179 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_get_Item__
                      );
    thunk_FUN_00d48444(Method_System_Reflection_FieldInfo_SetValueDirect__);
    thunk_FUN_00d48444(SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo);
    thunk_FUN_00d48444(
                      Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter_NumberWriteCommand_TypeInfo
                      );
    DAT_03781179 = 1;
  }
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar4 = Method_System_Reflection_FieldInfo_SetValueDirect__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_get_Item__;
  puVar2 = Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter_NumberWriteCommand_TypeInfo;
  if (lVar6 != 0) {
    iVar1 = param_1 * 2;
    FUN_02671880(lVar6,iVar1,iVar1,0,0,0);
    auVar13 = FUN_01149a68(lVar6,*(undefined8 *)puVar4);
    lVar7 = FUN_01127558(auVar13._0_8_,auVar13._8_8_,*(undefined8 *)puVar3);
    lVar11 = *(long *)puVar2;
    plVar8 = *(long **)(lVar11 + 0x38);
    if (plVar8 == (long *)0x0) {
      FUN_00d59478(lVar11);
      plVar8 = *(long **)(lVar11 + 0x38);
    }
    lVar11 = *plVar8;
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    if (*(int *)(lVar11 + 0x28) < 0) {
      iVar5 = thunk_FUN_00d42afc();
      iVar5 = iVar5 + -0x10;
    }
    else {
      iVar5 = 8;
    }
    UnityEngine_UIElements_PointerCaptureHelper__GetStateFor
              (lVar7,0,(long)(iVar5 * auVar13._8_4_),0);
    if (param_1 * -2 < 0 != SBORROW4(-param_1,param_1)) {
      lVar11 = (long)-param_1;
      do {
        iVar9 = (int)lVar11;
        fVar12 = SQRT((float)(param_1 * param_1) - (float)(iVar9 * iVar9));
        iVar5 = -0x80000000;
        if (fVar12 != INFINITY) {
          iVar5 = (int)fVar12;
        }
        if (0 < iVar5) {
          puVar10 = (ulong *)(lVar7 + ((long)param_1 + (long)((iVar9 + param_1) * iVar1)) * 4 +
                             (long)iVar5 * -4);
          do {
            iVar5 = iVar5 + -1;
            *puVar10 = param_2 & 0xffffffff | param_2 << 0x20;
            puVar10 = puVar10 + 1;
          } while (iVar5 != 0);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != param_1);
    }
    FUN_026723f8(lVar6,0);
    local_50 = 0;
    local_48 = 0;
    FUN_0268834c(0,0,(float)iVar1,(float)iVar1,&local_50,0);
    FUN_026a3894((undefined4)local_50,local_50._4_4_,(undefined4)local_48,local_48._4_4_,
                 (float)param_1,(float)param_1,0x3f800000,lVar6,0,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


