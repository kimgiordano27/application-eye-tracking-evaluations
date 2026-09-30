/*
FUNCTION_NAME: FUN_05668f74
ENTRY_POINT: 05668f74
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 132
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05668f74(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_58;
  
                    /* try { // try from 05668f88 to 05768fb3 has its CatchHandler @ 0566945c */
  if ((DAT_066d1d6a & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06322660);
    FUN_02b3c81c(PTR_DAT_06331e28);
    FUN_02b3c81c(PTR_DAT_0631ef98);
    FUN_02b3c81c(PTR_DAT_06321760);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32_TypeInfo
                );
    FUN_02b3c81c(PTR_DAT_06331e48);
                    /* try { // try from 05668ff0 to 05768ff7 has its CatchHandler @ 05669444 */
    FUN_02b3c81c(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                );
                    /* try { // try from 05669004 to 0576900b has its CatchHandler @ 05669450 */
    FUN_02b3c81c(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_MoveNext__
                );
    DAT_066d1d6a = 1;
  }
  puVar2 = PTR_DAT_06331e48;
  lVar10 = *(long *)(param_1 + 0x40);
  local_58 = 0;
  if (lVar10 == 0) {
    thunk_FUN_02ba3594(PTR_DAT_06320988);
    uVar11 = thunk_FUN_02b79644();
    uVar9 = thunk_FUN_02ba3594(PTR_DAT_06331e78);
    FUN_04c82410(uVar11,uVar9,0);
    uVar9 = thunk_FUN_02ba3594(
                              Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_MoveNext__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar11,uVar9);
  }
                    /* try { // try from 0566901c to 05769027 has its CatchHandler @ 05669434 */
                    /* try { // try from 05669038 to 0576903f has its CatchHandler @ 05669438 */
  uVar11 = *(undefined8 *)PTR_DAT_06331e28;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar11 = FUN_04d8a7b0(uVar11,0);
                    /* try { // try from 05669054 to 0576905b has its CatchHandler @ 05669424 */
  lVar10 = FUN_04c8ae78(lVar10,*(undefined8 *)puVar2,uVar11,0);
  puVar2 = PTR_DAT_0631ef98;
  if (lVar10 == 0) {
    lVar5 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
                    /* try { // try from 05669074 to 0576907b has its CatchHandler @ 056693ec */
    uVar11 = *(undefined8 *)PTR_DAT_0631ef98;
    lVar5 = thunk_FUN_02b79548(lVar10,uVar11);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar10,uVar11);
    }
    uVar11 = *(undefined8 *)puVar2;
    *(long *)(param_1 + 0x28) = lVar5;
    lVar5 = thunk_FUN_02b79548(lVar10,uVar11);
    if (lVar5 == 0) goto LAB_05669298;
  }
  thunk_FUN_02bb0e9c(param_1 + 0x28,lVar5);
  if (*(long *)(param_1 + 0x40) != 0) {
    bVar3 = FUN_04c8cef8(*(long *)(param_1 + 0x40),
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32_TypeInfo
                         ,0);
    *(byte *)(param_1 + 0x30) = bVar3 & 1;
    puVar2 = PTR_DAT_06321760;
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar4 = FUN_04c8d044(*(long *)(param_1 + 0x40),
                           *(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_MoveNext__
                           ,0);
      uVar11 = *(undefined8 *)puVar2;
      lVar10 = *(long *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      uVar11 = FUN_04d8a7b0(uVar11,0);
      if (lVar10 != 0) {
        lVar10 = FUN_04c8ae78(lVar10,*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                              ,uVar11,0);
        if (lVar10 != 0) {
          uVar11 = *(undefined8 *)PTR_DAT_06313048;
          lVar5 = thunk_FUN_02b79548(lVar10,uVar11);
          puVar2 = PTR_DAT_06322660;
          if (lVar5 == 0) {
LAB_05669298:
                    /* WARNING: Subroutine does not return */
            FUN_02b3ce44(lVar10,uVar11);
          }
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (0 < (int)uVar1) {
            lVar10 = 0;
            do {
              if (uVar1 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              plVar6 = *(long **)(lVar5 + 0x20 + lVar10 * 8);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44();
              }
              puVar7 = (undefined8 *)thunk_FUN_02b7978c();
              uVar11 = *puVar7;
              uVar9 = puVar7[1];
              plVar6 = (long *)FUN_05668164(param_1);
              local_70 = uVar11;
              uStack_68 = uVar9;
              uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)puVar2,&local_70);
              if (plVar6 == (long *)0x0) goto LAB_0566923c;
              (**(code **)(*plVar6 + 0x308))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x310));
              plVar6 = (long *)FUN_056682bc(param_1);
              if (plVar6 == (long *)0x0) goto LAB_0566923c;
              (**(code **)(*plVar6 + 0x2a8))(plVar6,uVar11,uVar9,*(undefined8 *)(*plVar6 + 0x2b0));
              uVar1 = *(uint *)(lVar5 + 0x18);
              lVar10 = lVar10 + 1;
            } while ((int)lVar10 < (int)uVar1);
          }
        }
        return;
      }
    }
  }
LAB_0566923c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


