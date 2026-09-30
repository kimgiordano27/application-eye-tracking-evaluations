/*
FUNCTION_NAME: FUN_02518120
ENTRY_POINT: 02518120
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


void FUN_02518120(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,byte param_9)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar10;
  undefined *puVar9;
  
  if ((DAT_037829c0 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_11407);
    thunk_FUN_00d48444(UnityEngine_Rendering_RenderTargetBlendState_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2528);
    thunk_FUN_00d48444(Sirenix_Serialization_UInt64Serializer_var);
    thunk_FUN_00d48444(StringLiteral_5601);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsri_n_u16__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_9DA6B2C4638D1DC7611B7F458BBFE7FD49FE1B36B67239B00B8A051F4E49558F
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_037829c0 = 1;
  }
  if (param_6 == 0) {
                    /* try { // try from 0251834c to 0261835f has its CatchHandler @ 025185e4 */
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar6 = thunk_FUN_00d62348();
                    /* catch() { ... } // from try @ 02517d04 with catch @ 02518360
                       try { // try from 02518360 to 0261837b has its CatchHandler @ 02517a78 */
    FUN_00ac2be8();
    uVar7 = thunk_FUN_00d48444(
                              Method_Oculus_Platform_Message<LivestreamingApplicationStatus>_get_Data__
                              );
    puVar9 = Method_System_Collections_Generic_List_Enumerator<WitDynamicEntity>_get_Current__;
                    /* try { // try from 0251837c to 0261837f has its CatchHandler @ 025183a8 */
  }
  else {
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_0268b4e0(param_7,0,0);
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 0251820c to 0261820f has its CatchHandler @ 0251824c */
                    /* try { // try from 02518210 to 02618213 has its CatchHandler @ 02518248 */
                    /* try { // try from 02518214 to 02618217 has its CatchHandler @ 02518244 */
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                  Field_<PrivateImplementationDetails>_9DA6B2C4638D1DC7611B7F458BBFE7FD49FE1B36B67239B00B8A051F4E49558F
                                );
      puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsri_n_u16__;
                    /* try { // try from 02518218 to 0261821b has its CatchHandler @ 02518240 */
      if (lVar4 != 0) {
                    /* try { // try from 0251821c to 0261821f has its CatchHandler @ 0251823c */
                    /* try { // try from 02518220 to 02618223 has its CatchHandler @ 02518238 */
                    /* try { // try from 02518224 to 02618227 has its CatchHandler @ 02518234 */
                    /* try { // try from 02518228 to 0261822b has its CatchHandler @ 02518230 */
                    /* try { // try from 0251822c to 0261829b has its CatchHandler @ 02517a78 */
                    /* catch() { ... } // from try @ 02518228 with catch @ 02518230 */
                    /* catch() { ... } // from try @ 02518224 with catch @ 02518234 */
                    /* catch() { ... } // from try @ 02518220 with catch @ 02518238 */
                    /* catch() { ... } // from try @ 0251821c with catch @ 0251823c */
        FUN_01320f6c(lVar4,param_6,*(undefined8 *)StringLiteral_2528);
                    /* catch() { ... } // from try @ 02518218 with catch @ 02518240 */
                    /* catch() { ... } // from try @ 02518214 with catch @ 02518244 */
        iVar1 = *(int *)(lVar4 + 0x18);
                    /* catch() { ... } // from try @ 02518210 with catch @ 02518248 */
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar9);
        puVar2 = Sirenix_Serialization_UInt64Serializer_var;
                    /* catch() { ... } // from try @ 0251820c with catch @ 0251824c */
        if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 02517e04 with catch @ 02518250 */
                    /* catch() { ... } // from try @ 02517e18 with catch @ 02518254 */
                    /* catch() { ... } // from try @ 02517d8c with catch @ 02518258 */
          iVar1 = iVar1 * 3;
                    /* catch() { ... } // from try @ 02517da0 with catch @ 0251825c */
                    /* catch() { ... } // from try @ 02517d14 with catch @ 02518260 */
                    /* catch() { ... } // from try @ 02517d28 with catch @ 02518264 */
                    /* catch() { ... } // from try @ 02517c9c with catch @ 02518268 */
          FUN_01320ebc(lVar5,iVar1,*(undefined8 *)Sirenix_Serialization_UInt64Serializer_var);
                    /* catch() { ... } // from try @ 02517cb0 with catch @ 0251826c */
          *(long *)(param_1 + 0x20) = lVar5;
                    /* catch() { ... } // from try @ 02517fb4 with catch @ 02518270 */
                    /* catch() { ... } // from try @ 02517f44 with catch @ 02518274 */
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar9);
                    /* catch() { ... } // from try @ 02517ed4 with catch @ 02518278 */
          if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 02517e64 with catch @ 0251827c */
                    /* catch() { ... } // from try @ 02517df4 with catch @ 02518280 */
            FUN_01320ebc(lVar5,iVar1,*(undefined8 *)puVar2);
            lVar10 = *(long *)(param_1 + 0x30);
            *(long *)(param_1 + 0x18) = lVar5;
            if (lVar10 != 0) {
                    /* try { // try from 0251829c to 0261829f has its CatchHandler @ 025182c8 */
                    /* try { // try from 025182a0 to 026182db has its CatchHandler @ 02517a78 */
              lVar5 = *(long *)UnityEngine_Rendering_RenderTargetBlendState_TypeInfo;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              uVar3 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 200))
              ;
              if ((uVar3 & 1) == 0) {
                *(undefined4 *)(lVar10 + 0x18) = 0;
              }
              else {
                    /* catch() { ... } // from try @ 0251829c with catch @ 025182c8 */
                iVar1 = *(int *)(lVar10 + 0x18);
                *(undefined4 *)(lVar10 + 0x18) = 0;
                if (0 < iVar1) {
                    /* try { // try from 025182dc to 026182ef has its CatchHandler @ 025185e4 */
                  FUN_0179519c(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
                }
              }
                    /* catch() { ... } // from try @ 02517d7c with catch @ 025182f0
                       try { // try from 025182f0 to 0261830b has its CatchHandler @ 02517a78 */
              if (*(long *)(param_1 + 0x38) != 0) {
                FUN_0129a9f4(*(long *)(param_1 + 0x38),*(undefined8 *)StringLiteral_11407);
                    /* try { // try from 0251830c to 0261830f has its CatchHandler @ 02518338 */
                    /* try { // try from 02518310 to 0261834b has its CatchHandler @ 02517a78 */
                    /* catch() { ... } // from try @ 0251830c with catch @ 02518338 */
                FUN_025183e0(param_1,param_2,param_3,param_4,param_5,lVar4,param_7,param_9 & 1);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* try { // try from 02518380 to 026183bb has its CatchHandler @ 02517a78 */
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar7 = thunk_FUN_00d48444(System_Action<bool>_TypeInfo);
                    /* catch() { ... } // from try @ 0251837c with catch @ 025183a8 */
    puVar9 = Method_System_Globalization_HijriCalendar_CheckEraRange__;
  }
  uVar8 = thunk_FUN_00d48444(puVar9);
                    /* try { // try from 025183bc to 026183cf has its CatchHandler @ 025185e4 */
  FUN_016f4460(uVar6,uVar7,uVar8,0);
  uVar7 = thunk_FUN_00d48444(Method_System_Data_DataRelation_GetParentRow__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar6,uVar7);
}


