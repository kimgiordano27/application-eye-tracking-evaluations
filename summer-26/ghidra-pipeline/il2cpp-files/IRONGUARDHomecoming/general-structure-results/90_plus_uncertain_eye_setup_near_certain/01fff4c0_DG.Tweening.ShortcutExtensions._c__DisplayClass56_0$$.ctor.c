/*
FUNCTION_NAME: DG.Tweening.ShortcutExtensions.<>c__DisplayClass56_0$$.ctor
ENTRY_POINT: 01fff4c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 108
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8 DG_Tweening_ShortcutExtensions_<>c__DisplayClass56_0___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 *puVar11;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  
  thunk_FUN_01efb3a4(Method_System_Nullable<EntryType>_ToString__);
  thunk_FUN_01efb3a4(Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
  thunk_FUN_01efb3a4(Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
  thunk_FUN_01efb3a4(Method_OVRPlugin_PinnedArray<Guid>__ctor__);
  *(undefined1 *)(unaff_x20 + 0xf46) = 1;
  lVar7 = thunk_FUN_01f117cc(*unaff_x22);
  FUN_035ac8e8(lVar7,0);
  puVar6 = Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__;
  puVar5 = Method_OVRPlugin_PinnedArray<Guid>_Dispose__;
  puVar4 = Method_System_Nullable<EntryType>_ToString__;
  puVar3 = Method_System_Nullable<EntryType>_GetValueOrDefault__;
  puVar2 = Method_System_Nullable<EntryType>__ctor__;
  puVar1 = Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__;
  if (lVar7 != 0) {
    puVar11 = (undefined8 *)(lVar7 + 0x10);
    *puVar11 = unaff_x21;
    thunk_FUN_01f51358(puVar11);
    uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_02a71a98(uVar8,lVar7,*(undefined8 *)puVar5,0);
    uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
    FUN_02a729b4(uVar9,lVar7,*(undefined8 *)puVar6,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = (uint)unaff_x19;
    uVar8 = FUN_020f0888((float)(uVar10 & 0xff) / 255.0,(float)(uVar10 >> 8 & 0xff) / 255.0,
                         (float)(uVar10 >> 0x10 & 0xff) / 255.0,
                         (float)(unaff_x19 >> 0x18 & 0xff) / 255.0,uVar8,uVar9,0);
    FUN_0242d544(uVar8,*puVar11,*(undefined8 *)puVar4);
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


