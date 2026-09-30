/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.InputActionTrace.ActionEventPtr$$get_phase
ENTRY_POINT: 059a553c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_14;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void UnityEngine_InputSystem_Utilities_InputActionTrace_ActionEventPtr__get_phase
               (undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  undefined8 *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  int iStack0000000000000000;
  int iStack0000000000000004;
  undefined8 in_stack_00000008;
  
  while( true ) {
    uVar6 = thunk_FUN_0624cacc(param_1,param_2,param_3);
    if (*(long *)(unaff_x20 + 0x2d8) == 0) break;
    uVar7 = FUN_03abf644(*(long *)(unaff_x20 + 0x2d8),unaff_w21,*unaff_x19);
    FUN_06296de0(uVar6,uVar7,0);
    if (*(long *)(unaff_x20 + 0x2e0) == 0) break;
    uVar7 = FUN_03abf644(*(long *)(unaff_x20 + 0x2e0),unaff_w21,*unaff_x23);
    FUN_06296de0(uVar6,uVar7,0);
    in_stack_00000008 = *(undefined8 *)(unaff_x20 + 0x260);
    FUN_0624be58(&stack0x00000008,uVar6,0);
    if (*(long *)(unaff_x20 + 0x2d8) == 0) break;
    FUN_03ac0f78(*(long *)(unaff_x20 + 0x2d8),unaff_w21,*unaff_x24);
    if ((int)unaff_w21 < 1) {
      in_stack_00000008 = *(undefined8 *)(unaff_x20 + 0x260);
      FUN_0624c378(&stack0x00000008,0);
      lVar11 = *(long *)(unaff_x20 + 0x2d8);
      if (lVar11 != 0) {
        iVar14 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (0 < iVar14) {
          Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(lVar11 + 0x10),0,iVar14,0);
        }
        puVar5 = Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__;
        puVar4 = Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__;
        puVar3 = PTR_DAT_067cbf80;
        puVar2 = PTR_DAT_067c9cb8;
        if (iStack0000000000000000 < 1) goto LAB_059a596c;
        iVar14 = 0;
        goto UnityEngine_InputSystem_Utilities_InputActionTrace_ActionEventPtr__get_valueSizeInBytes
        ;
      }
      break;
    }
    in_stack_00000008 = *(undefined8 *)(unaff_x20 + 0x260);
    unaff_w21 = unaff_w21 - 1;
    param_1 = &stack0x00000008;
    param_2 = (ulong)unaff_w21;
    param_3 = 0;
  }
LAB_059a5998:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
UnityEngine_InputSystem_Utilities_InputActionTrace_ActionEventPtr__get_valueSizeInBytes:
  plVar8 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cbf70);
  FUN_059890fc(plVar8,0);
  iStack0000000000000004 = iVar14;
  uVar6 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),(long)&stack0x00000000 + 4);
  uVar6 = FUN_04f65e2c(*(undefined8 *)
                        Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>__ctor__,
                       uVar6,0);
  if (plVar8 == (long *)0x0) goto LAB_059a5998;
  FUN_0623f514(plVar8,uVar6,0);
  (**(code **)(*plVar8 + 0x248))(plVar8,1,*(undefined8 *)(*plVar8 + 0x250));
  FUN_0636f0c8(plVar8,0,0);
  FUN_0623f468(plVar8,0,0);
  FUN_05987b50(plVar8,0,0);
  FUN_0624193c(plVar8,*(undefined8 *)
                       Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>__ctor__,0);
  uVar6 = thunk_FUN_02f45270(*(undefined8 *)
                              Method_Oculus_Platform_Message<LivestreamingStartResult>_get_Data__);
  FUN_0476105c();
  uVar7 = thunk_FUN_02f45270(*(undefined8 *)Method_System_Collections_Generic_List<UIVertex>_Add__);
  FUN_059e6e44(uVar7,uVar6,0);
  uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_04d8cf5c();
  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_04d8cf5c();
  uVar10 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cbfa0);
  FUN_059e3888(uVar10,uVar6,uVar9,0,0);
  lVar11 = *(long *)(unaff_x20 + 0x2d8);
  if (lVar11 == 0) goto LAB_059a5998;
  lVar12 = *(long *)(lVar11 + 0x10);
  lVar13 = *(long *)Method_Oculus_Platform_Message<LivestreamingStatus>__ctor__;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (lVar12 == 0) goto LAB_059a5998;
  uVar1 = *(uint *)(lVar11 + 0x18);
  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
    *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
  }
  else {
    FUN_03abf904(lVar11,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
  }
  lVar11 = *(long *)(unaff_x20 + 0x2e0);
  if (lVar11 == 0) goto LAB_059a5998;
  lVar12 = *(long *)(lVar11 + 0x10);
  lVar13 = *(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (lVar12 == 0) goto LAB_059a5998;
  uVar1 = *(uint *)(lVar11 + 0x18);
  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
    *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
  }
  else {
    FUN_03abf904(lVar11,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
  }
  FUN_06296d34(plVar8,uVar7,0);
  FUN_06296d34(plVar8,uVar10,0);
  lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_0623f858(lVar11,0);
  if (lVar11 == 0) goto LAB_059a5998;
  FUN_0623f514(lVar11,*(undefined8 *)puVar4,0);
  FUN_0623f468(lVar11,1,0);
  FUN_0624193c(lVar11,*(undefined8 *)puVar4,0);
  FUN_06247510(plVar8,lVar11,0);
  lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_0623f858(lVar11,0);
  if (lVar11 == 0) goto LAB_059a5998;
  FUN_0623f514(lVar11,*(undefined8 *)puVar5,0);
  FUN_0623f468(lVar11,1,0);
  FUN_0624193c(lVar11,*(undefined8 *)puVar5,0);
  FUN_06247510(plVar8,lVar11,0);
  in_stack_00000008 = *(undefined8 *)(unaff_x20 + 0x260);
  FUN_0624b7dc(&stack0x00000008,plVar8,0);
  iVar14 = iVar14 + 1;
  if (iStack0000000000000000 == iVar14) {
LAB_059a596c:
    FUN_059a5ba4();
    return;
  }
  goto UnityEngine_InputSystem_Utilities_InputActionTrace_ActionEventPtr__get_valueSizeInBytes;
}


