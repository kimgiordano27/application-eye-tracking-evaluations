/*
FUNCTION_NAME: SharedDeoVR.Generated.SLRv2.LikeCommentRoute.Request$$.ctor
ENTRY_POINT: 0949a848
PROGRAM: Hyper-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0949aae8) */

void SharedDeoVR_Generated_SLRv2_LikeCommentRoute_Request___ctor(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  int *unaff_x19;
  undefined8 uVar8;
  long unaff_x20;
  int iVar9;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  long *in_stack_00000018;
  int in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  int iStack0000000000000044;
  undefined4 *in_stack_00000048;
  
  FUN_04947ee4(PTR_DAT_0ac12810);
  *(undefined1 *)(unaff_x20 + 0xc70) = 1;
  iStack0000000000000044 = *unaff_x19;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000028 = 0;
  if (iStack0000000000000044 == 0) {
LAB_0949a998:
    in_stack_00000018 = (long *)&stack0x00000048;
    in_stack_00000010 = (undefined1 *)&stack0x00000044;
    in_stack_00000008 = 0;
    iStack0000000000000044 = -1;
    _in_stack_00000030 = *(undefined1 (*) [16])(in_stack_00000048 + 0x10);
    *(undefined8 *)(in_stack_00000048 + 0x10) = 0;
    *(undefined8 *)(in_stack_00000048 + 0x12) = 0;
    *in_stack_00000048 = 0xffffffff;
  }
  else {
    in_stack_00000008 = 0;
    Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__System_Collections_IEnumerable_GetEnumerator
              (&stack0x00000008,unaff_x19[8],*(undefined8 *)PTR_DAT_0ac90ff8);
    *(undefined8 *)(in_stack_00000048 + 0xe) = in_stack_00000008;
    thunk_FUN_049ee3d8(in_stack_00000048 + 0xe,0);
    in_stack_00000010 = (undefined1 *)&stack0x00000044;
    in_stack_00000008 = 0;
    in_stack_00000018 = (long *)&stack0x00000048;
    if (iStack0000000000000044 == 0) goto LAB_0949a998;
    plVar4 = *(long **)(in_stack_00000048 + 10);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar5 = (**(code **)(*plVar4 + 0x2e8))
                      (plVar4,*(undefined8 *)(in_stack_00000048 + 0xe),0,in_stack_00000048[8],
                       *(undefined8 *)(in_stack_00000048 + 0xc),*(undefined8 *)(*plVar4 + 0x2f0));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    _in_stack_00000030 = FUN_0775e154(lVar5,0,*(undefined8 *)PTR_DAT_0ac12810);
    uVar6 = FUN_08471840(&stack0x00000030,*(undefined8 *)PTR_DAT_0ac12808);
    if ((uVar6 & 1) == 0) {
      iStack0000000000000044 = 0;
      *in_stack_00000048 = 0;
      *(undefined1 (*) [16])(in_stack_00000048 + 0x10) = _in_stack_00000030;
      thunk_FUN_049ee3d8(in_stack_00000048 + 0x10,0);
      puVar2 = in_stack_00000048;
      if (*(int *)(*(long *)PTR_DAT_0ac13050 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac13050,extraout_x1,in_stack_00000048);
      }
      FUN_0534a204(puVar2 + 2,&stack0x00000030,in_stack_00000048,*(undefined8 *)PTR_DAT_0ac90fe8);
      uVar8 = 0;
      iVar9 = 5;
      goto LAB_0949aa04;
    }
  }
  uVar3 = FUN_08471888(&stack0x00000030,*(undefined8 *)PTR_DAT_0ac12800);
  uVar8 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac09740,uVar3);
  FUN_08da0170(*(undefined8 *)(in_stack_00000048 + 0xe),uVar8,uVar3,0);
  iVar9 = 6;
LAB_0949aa04:
  if (iStack0000000000000044 < 0) {
    FUN_0717d768(*in_stack_00000018 + 0x38,*(undefined8 *)PTR_DAT_0ac90ff0);
  }
  puVar2 = in_stack_00000048;
  puVar1 = PTR_DAT_0ac13050;
  if (iVar9 == 6) {
    *in_stack_00000048 = 0xfffffffe;
    lVar5 = *(long *)puVar1;
    *(undefined8 *)(in_stack_00000048 + 0xe) = 0;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_07b6c5d8(puVar2 + 2,uVar8,*(undefined8 *)PTR_DAT_0ac13080);
  }
  else if (iVar9 == 0) {
    uVar8 = *(undefined8 *)(&stack0x00000020 + (long)(in_stack_00000028 + -1) * 8);
    *in_stack_00000048 = 0xfffffffe;
    *(undefined8 *)(in_stack_00000048 + 0xe) = 0;
    lVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac13050);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac130d8);
    FUN_07b6c824(puVar2 + 2,uVar8,uVar7);
  }
  return;
}


