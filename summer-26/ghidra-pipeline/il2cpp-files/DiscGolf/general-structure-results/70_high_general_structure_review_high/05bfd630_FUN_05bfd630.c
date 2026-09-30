/*
FUNCTION_NAME: FUN_05bfd630
ENTRY_POINT: 05bfd630
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_14;telemetry_or_network_hits_6
*/


void FUN_05bfd630(long param_1,long param_2,long *param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
                    /* try { // try from 05bfd63c to 05cfd647 has its CatchHandler @ 05bfd84c */
                    /* try { // try from 05bfd658 to 05cfd663 has its CatchHandler @ 05bfd82c */
  if ((DAT_06dc2643 & 1) == 0) {
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo);
                    /* try { // try from 05bfd678 to 05cfd687 has its CatchHandler @ 05bfd850 */
    FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupBase_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
                );
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetResult__
                );
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                );
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_Image>_get_Values__);
    FUN_02d965b8(Method_UnityEngine_UIElements_CommandEventBase<ValidateCommandEvent>_GetPooled__);
                    /* try { // try from 05bfd6d0 to 05cfd6d7 has its CatchHandler @ 05bfd820 */
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<int,_Texture2D>__ctor__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_CommandEventBase<ValidateCommandEvent>_get_commandName__
                );
    FUN_02d965b8(Method_System_Collections_Generic_Comparer<int>_get_Default__);
                    /* try { // try from 05bfd6ec to 05cfd707 has its CatchHandler @ 05bfd848 */
    FUN_02d965b8(
                Method_UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>__ctor__
                );
    FUN_02d965b8(Method_System_Collections_Generic_Comparer<object>_get_Default__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_Image>_set_Item__);
    DAT_06dc2643 = 1;
  }
                    /* try { // try from 05bfd718 to 05cfd727 has its CatchHandler @ 05bfd844 */
  if ((param_3 == (long *)0x0) || (param_3[2] == 0)) {
LAB_05bfda8c:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)(param_3[2] + 0x10) == 0) {
    return;
  }
  if (param_2 == 0) goto LAB_05bfda8c;
                    /* try { // try from 05bfd73c to 05cfd75b has its CatchHandler @ 05bfd83c */
  plVar3 = (long *)FUN_05b110a0(param_2,param_3,0);
  if (plVar3 == (long *)0x0) {
                    /* try { // try from 05bfd8c0 to 05cfd8cf has its CatchHandler @ 05bfd950 */
    FUN_05b10a8c(param_2,param_3,param_4,0);
    return;
  }
  if (plVar3 == param_4) {
    return;
  }
  uVar9 = *(undefined8 *)
           Method_UnityEngine_UIElements_CommandEventBase<ValidateCommandEvent>_GetPooled__;
  if (param_4 == (long *)0x0) goto LAB_05bfda58;
                    /* try { // try from 05bfd76c to 05cfd76f has its CatchHandler @ 05bfd838 */
  lVar7 = *param_4;
  bVar1 = *(byte *)(lVar7 + 0x130);
                    /* try { // try from 05bfd774 to 05cfd783 has its CatchHandler @ 05bfd81c */
  bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo + 0x130);
                    /* try { // try from 05bfd784 to 05cfd7f7 has its CatchHandler @ 05bfd50c */
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo)) {
    bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo)) {
      bVar2 = *(byte *)(*(long *)
                         System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                       + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)
           System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
         )) {
                    /* try { // try from 05bfd7f8 to 05cfd7ff has its CatchHandler @ 05bfd850 */
        bVar2 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo + 0x130);
                    /* try { // try from 05bfd800 to 05cfd803 has its CatchHandler @ 05bfd834 */
                    /* try { // try from 05bfd804 to 05cfd807 has its CatchHandler @ 05bfd50c */
                    /* try { // try from 05bfd808 to 05cfd80b has its CatchHandler @ 05bfd830 */
                    /* try { // try from 05bfd80c to 05cfd80f has its CatchHandler @ 05bfd84c */
                    /* try { // try from 05bfd810 to 05cfd813 has its CatchHandler @ 05bfd828 */
                    /* try { // try from 05bfd814 to 05cfd817 has its CatchHandler @ 05bfd824 */
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo)) {
                    /* try { // try from 05bfd818 to 05cfd81b has its CatchHandler @ 05bfd838 */
                    /* catch() { ... } // from try @ 05bfd774 with catch @ 05bfd81c
                       try { // try from 05bfd81c to 05cfd86b has its CatchHandler @ 05bfd50c */
                    /* catch() { ... } // from try @ 05bfd6d0 with catch @ 05bfd820 */
                    /* catch() { ... } // from try @ 05bfd814 with catch @ 05bfd824 */
          bVar2 = *(byte *)(*(long *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
                           + 0x130);
                    /* catch() { ... } // from try @ 05bfd810 with catch @ 05bfd828 */
                    /* catch() { ... } // from try @ 05bfd658 with catch @ 05bfd82c */
                    /* catch() { ... } // from try @ 05bfd808 with catch @ 05bfd830 */
                    /* catch() { ... } // from try @ 05bfd800 with catch @ 05bfd834 */
                    /* catch() { ... } // from try @ 05bfd76c with catch @ 05bfd838
                       catch() { ... } // from try @ 05bfd818 with catch @ 05bfd838 */
                    /* catch() { ... } // from try @ 05bfd73c with catch @ 05bfd83c */
          if ((bVar1 < bVar2) ||
             (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
             )) {
                    /* catch() { ... } // from try @ 05bfd718 with catch @ 05bfd844 */
                    /* catch() { ... } // from try @ 05bfd6ec with catch @ 05bfd848 */
                    /* catch() { ... } // from try @ 05bfd63c with catch @ 05bfd84c
                       catch() { ... } // from try @ 05bfd80c with catch @ 05bfd84c */
                    /* catch() { ... } // from try @ 05bfd678 with catch @ 05bfd850
                       catch() { ... } // from try @ 05bfd7f8 with catch @ 05bfd850 */
            bVar2 = *(byte *)(*(long *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetResult__
                             + 0x130);
                    /* try { // try from 05bfd86c to 05cfd883 has its CatchHandler @ 05bfd95c */
            if ((bVar1 < bVar2) ||
               (puVar8 = (undefined8 *)
                         Method_System_Collections_Generic_Dictionary<int,_Texture2D>__ctor__,
               *(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
               *(long *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetResult__
               )) {
              bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo + 0x130);
              if ((bVar1 < bVar2) ||
                 (puVar8 = (undefined8 *)
                           Method_UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>__ctor__
                 , *(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                   *(long *)OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo)) goto LAB_05bfda58;
            }
            goto LAB_05bfda54;
          }
          uVar5 = FUN_05bfdce8(plVar3,plVar3,param_4,param_2);
          puVar8 = (undefined8 *)
                   Method_System_Collections_Generic_Dictionary<string,_Image>_set_Item__;
        }
        else {
          uVar5 = FUN_05bfdbbc(plVar3,plVar3,param_4,param_2);
          puVar8 = (undefined8 *)Method_System_Collections_Generic_Comparer<int>_get_Default__;
        }
      }
      else {
                    /* catch() { ... } // from try @ 05bfd990 with catch @ 05bfd998 */
                    /* try { // try from 05bfd99c to 05cfd9a3 has its CatchHandler @ 05bfd9ac */
        uVar5 = FUN_05bfdbbc(plVar3,plVar3,param_4,param_2);
                    /* try { // try from 05bfd9a4 to 05cfd9af has its CatchHandler @ 05bfd50c */
        puVar8 = (undefined8 *)
                 Method_UnityEngine_UIElements_CommandEventBase<ValidateCommandEvent>_get_commandName__
        ;
      }
joined_r0x05bfda04:
      if ((uVar5 & 1) != 0) {
        return;
      }
    }
    else {
      plVar4 = *(long **)(param_1 + 0x10);
                    /* try { // try from 05bfd930 to 05cfd93f has its CatchHandler @ 05bfd95c */
      if (plVar4 == (long *)0x0) goto LAB_05bfda8c;
                    /* try { // try from 05bfd940 to 05cfd943 has its CatchHandler @ 05bfd950 */
      uVar9 = (**(code **)(*plVar4 + 0x1a8))(plVar4,param_3[3],*(undefined8 *)(*plVar4 + 0x1b0));
                    /* try { // try from 05bfd944 to 05cfd947 has its CatchHandler @ 05bfd948 */
                    /* catch() { ... } // from try @ 05bfd944 with catch @ 05bfd948 */
                    /* catch() { ... } // from try @ 05bfd8a0 with catch @ 05bfd94c */
      uVar5 = FUN_05bb258c(uVar9,*(undefined8 *)(param_1 + 0x38),0);
                    /* catch() { ... } // from try @ 05bfd8c0 with catch @ 05bfd950
                       catch() { ... } // from try @ 05bfd940 with catch @ 05bfd950 */
      puVar8 = (undefined8 *)Method_System_Collections_Generic_Comparer<object>_get_Default__;
      if ((uVar5 & 1) != 0) {
                    /* catch() { ... } // from try @ 05bfd8a4 with catch @ 05bfd954 */
        lVar7 = FUN_05ac1170(0);
                    /* catch() { ... } // from try @ 05bfd86c with catch @ 05bfd95c
                       catch() { ... } // from try @ 05bfd930 with catch @ 05bfd95c */
                    /* try { // try from 05bfd964 to 05cfd967 has its CatchHandler @ 05bfd9ac */
                    /* try { // try from 05bfd968 to 05cfd98f has its CatchHandler @ 05bfd50c */
        if ((lVar7 == 0) || (lVar7 = FUN_05b0869c(lVar7,0), lVar7 == 0)) goto LAB_05bfda8c;
                    /* catch() { ... } // from try @ 05bfd8dc with catch @ 05bfd970 */
        plVar4 = (long *)FUN_05b110a0(lVar7,param_3,0);
        puVar8 = (undefined8 *)Method_System_Collections_Generic_Comparer<object>_get_Default__;
        goto joined_r0x05bfd97c;
      }
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_05bfda8c;
                    /* try { // try from 05bfd8dc to 05cfd913 has its CatchHandler @ 05bfd970 */
    uVar9 = (**(code **)(*plVar4 + 0x1a8))(plVar4,param_3[3],*(undefined8 *)(*plVar4 + 0x1b0));
    uVar5 = FUN_05bb258c(uVar9,*(undefined8 *)(param_1 + 0x38),0);
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_05bfda90(uVar5,plVar3,param_4,param_2);
      puVar8 = (undefined8 *)
               Method_System_Collections_Generic_Dictionary<string,_Image>_get_Values__;
      goto joined_r0x05bfda04;
    }
    lVar7 = FUN_05ac1170(0);
    if ((lVar7 == 0) || (lVar7 = FUN_05b0870c(lVar7,0), lVar7 == 0)) goto LAB_05bfda8c;
                    /* try { // try from 05bfd914 to 05cfd92f has its CatchHandler @ 05bfd50c */
    plVar4 = (long *)FUN_05b110a0(lVar7,param_3,0);
    puVar8 = (undefined8 *)Method_System_Collections_Generic_Dictionary<string,_Image>_get_Values__;
joined_r0x05bfd97c:
    if (plVar3 == plVar4) {
      FUN_05b10bcc(param_2,param_3,param_4,0);
      return;
    }
    if (plVar4 == param_4) {
      return;
    }
  }
LAB_05bfda54:
  uVar9 = *puVar8;
LAB_05bfda58:
  uVar6 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
  FUN_05bfde00(param_1,uVar9,uVar6,param_4);
  return;
}


