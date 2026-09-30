/*
FUNCTION_NAME: FUN_061e87ec
ENTRY_POINT: 061e87ec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


long FUN_061e87ec(long param_1,long param_2,long *param_3,long param_4)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long local_48;
  
                    /* try { // try from 061e8810 to 062e8813 has its CatchHandler @ 061e8a9c */
                    /* try { // try from 061e8818 to 062e8823 has its CatchHandler @ 061e8aac */
  if ((DAT_076dde4a & 1) == 0) {
    thunk_FUN_032e1da0(System_Collections_Generic_List<ChallengeEntry>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<MapTransform>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072794b0);
                    /* try { // try from 061e8848 to 062e884f has its CatchHandler @ 061e8a68 */
    thunk_FUN_032e1da0(PTR_DAT_072a1998);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<VisualElement>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<UIRStylePainter_RepeatRectUV>_TypeInfo);
    thunk_FUN_032e1da0(
                      Unity_VisualScripting_StaticFunctionInvoker<Matrix4x4,_Matrix4x4,_Matrix4x4>_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_07287a50);
    thunk_FUN_032e1da0(System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_TypeInfo);
                    /* try { // try from 061e8894 to 062e889b has its CatchHandler @ 061e8a6c */
    thunk_FUN_032e1da0(
                      System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_List<VFXHierarchyAttributeMapBinder_Bone>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_List<VisualEffectControlClip_ClipEvent>_TypeInfo);
    DAT_076dde4a = 1;
  }
  local_48 = 0;
  if (param_2 == 0) {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_061e8bcc;
                    /* try { // try from 061e88d4 to 062e88db has its CatchHandler @ 061e8acc */
    param_2 = FUN_06173ce8(*(long *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),0);
    if (param_2 == 0) {
      return 0;
    }
  }
  if (param_3 == (long *)0x0) goto LAB_061e8bcc;
  uVar2 = FUN_0624bb14(param_3,0);
  if ((uVar2 & 1) == 0) {
    if ((param_4 == 0) ||
       (uVar2 = FUN_057aa36c(param_4,*(undefined8 *)PTR_DAT_07287a50,0), (uVar2 & 1) == 0)) {
      if ((*(long *)(param_1 + 0x48) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar4 == 0)) goto LAB_061e8bcc;
      uVar2 = FUN_050fa644(lVar4,param_3,&local_48,
                           *(undefined8 *)System_Collections_Generic_List<MapTransform>_TypeInfo);
      if (((uVar2 & 1) == 0) &&
         (uVar2 = thunk_FUN_057aa644(param_3[3],*(undefined8 *)(param_1 + 200),0), (uVar2 & 1) != 0)
         ) {
        lVar4 = param_3[2];
        uVar7 = *(undefined8 *)(param_1 + 200);
        uVar3 = thunk_FUN_032a56a0(*(undefined8 *)
                                    System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo
                                  );
        FUN_0624b7a8(uVar3,lVar4,uVar7,0);
        if (*(int *)(*(long *)System_Collections_Generic_List<ChallengeEntry>_TypeInfo + 0xe0) == 0)
        {
          thunk_FUN_032cd7c0();
        }
        lVar4 = FUN_062927c4(uVar3,0);
        if (lVar4 != 0) {
          local_48 = FUN_061ada28(lVar4,0);
        }
      }
      if (local_48 == 0) {
        uVar3 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
        puVar5 = (undefined8 *)
                 System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_TypeInfo;
        goto LAB_061e8a38;
      }
      uVar2 = FUN_061ada84(*(undefined8 *)(local_48 + 0x28),*(undefined8 *)(param_2 + 0x28),
                           *(undefined4 *)(param_2 + 0x90),0);
      if ((uVar2 & 1) == 0) {
        lVar4 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072794b0,2);
        uVar3 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
        if (lVar4 == 0) goto LAB_061e8bcc;
        if (*(int *)(lVar4 + 0x18) == 0) {
LAB_061e8bd0:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(undefined8 *)(lVar4 + 0x20) = uVar3;
        thunk_FUN_0333a630();
        lVar6 = *(long *)(param_1 + 0x60);
        if (lVar6 == 0) goto LAB_061e8bcc;
        uVar3 = *(undefined8 *)(lVar6 + 0x30);
        uVar7 = *(undefined8 *)(lVar6 + 0x38);
        if (*(int *)(*(long *)System_Collections_Generic_List<VisualElement>_TypeInfo + 0xe0) == 0)
        {
          thunk_FUN_032cd7c0();
        }
        uVar3 = FUN_061b28e0(uVar3,uVar7,0);
        if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_061e8bd0;
        *(undefined8 *)(lVar4 + 0x28) = uVar3;
        thunk_FUN_0333a630();
        FUN_06281b94(param_1,*(undefined8 *)
                              System_Collections_Generic_List<VFXHierarchyAttributeMapBinder_Bone>_TypeInfo
                     ,lVar4,0);
        goto LAB_061e8a4c;
      }
      param_2 = local_48;
      puVar5 = (undefined8 *)
               System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_TypeInfo;
      if (local_48 == 0) goto joined_r0x061e8ae0;
    }
    else {
      FUN_06281e30(param_1,*(undefined8 *)
                            Unity_VisualScripting_StaticFunctionInvoker<Matrix4x4,_Matrix4x4,_Matrix4x4>_TypeInfo
                   ,0);
    }
  }
  else if (*(char *)(param_2 + 0x72) != '\0') {
    lVar4 = *(long *)(param_1 + 0x60);
    if (lVar4 == 0) goto LAB_061e8bcc;
    uVar3 = *(undefined8 *)(lVar4 + 0x30);
    uVar7 = *(undefined8 *)(lVar4 + 0x38);
    if (*(int *)(*(long *)System_Collections_Generic_List<VisualElement>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar3 = FUN_061b28e0(uVar3,uVar7,0);
    puVar5 = (undefined8 *)
             System_Collections_Generic_List<VisualEffectControlClip_ClipEvent>_TypeInfo;
LAB_061e8a38:
    FUN_06281aac(param_1,*puVar5,uVar3,0);
LAB_061e8a4c:
    param_2 = 0;
    puVar5 = (undefined8 *)
             System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_TypeInfo;
    goto joined_r0x061e8ae0;
  }
  puVar5 = (undefined8 *)
           System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_TypeInfo;
  if (*(char *)(param_2 + 0x73) == '\0') {
joined_r0x061e8ae0:
    if (param_4 != 0) {
      FUN_06281e30(param_1,*puVar5,0);
    }
    return param_2;
  }
  if (param_4 == 0) {
    return param_2;
  }
  lVar4 = *(long *)(param_1 + 0x60);
  if (*(int *)(*(long *)PTR_DAT_072a1998 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  bVar1 = FUN_062424c0(param_4,0);
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x10) = bVar1 & 1;
    if (*(long *)(param_1 + 0x60) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x60) + 0x10) == '\0') {
        return param_2;
      }
      param_4 = *(long *)(param_2 + 0x40);
      puVar5 = (undefined8 *)System_Collections_Generic_List<UIRStylePainter_RepeatRectUV>_TypeInfo;
      goto joined_r0x061e8ae0;
    }
  }
LAB_061e8bcc:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


