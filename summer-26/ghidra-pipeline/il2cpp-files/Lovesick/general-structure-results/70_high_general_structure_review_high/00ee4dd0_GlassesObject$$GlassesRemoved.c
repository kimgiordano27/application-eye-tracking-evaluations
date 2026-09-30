/*
FUNCTION_NAME: GlassesObject$$GlassesRemoved
ENTRY_POINT: 00ee4dd0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void GlassesObject__GlassesRemoved(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar9;
  undefined8 *unaff_x22;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xc10));
  thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_RuntimeLabel___TypeInfo);
  thunk_FUN_00d48444(
                    Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpacesSaveResultData>__
                    );
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_HashSet<MB3_MeshCombinerSingle_BoneAndBindpose>__ctor__
                    );
  thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<CwInputManager>__);
  thunk_FUN_00d48444(StringLiteral_8279);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>__ctor__
                    );
  thunk_FUN_00d48444(StringLiteral_227);
  *(undefined1 *)(unaff_x20 + 0x34c) = 1;
  lVar4 = thunk_FUN_00d62348(*unaff_x22);
  puVar1 = Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpacesSaveResultData>__;
                    /* catch() { ... } // from try @ 00ee4e98 with catch @ 00ee4e3c */
  if (lVar4 != 0) {
    FUN_017b46ec(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = unaff_x21;
    lVar9 = *(long *)(unaff_x19 + 0x18);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar5 != 0) &&
       (FUN_0136b58c(lVar5,lVar4,
                     *(undefined8 *)
                      Method_System_Collections_Generic_HashSet<MB3_MeshCombinerSingle_BoneAndBindpose>__ctor__
                     ,0), puVar2 = StringLiteral_302,
       puVar1 = 
       Method_System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>__ctor__
       , lVar9 != 0)) {
                    /* try { // try from 00ee4e8c to 00fe4e97 has its CatchHandler @ 00ee4eb4 */
                    /* try { // try from 00ee4e98 to 00fe4ec7 has its CatchHandler @ 00ee4e3c */
      iVar3 = FUN_01322f74(lVar9,lVar5,
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_RuntimeLabel___TypeInfo);
      puVar8 = (undefined8 *)StringLiteral_227;
      if (iVar3 < 0) {
LAB_00ee4eec:
        uVar7 = FUN_01600424(*(undefined8 *)puVar1,*(undefined8 *)(lVar4 + 0x10),*puVar8,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        FUN_026610e4(uVar7,0);
        return;
      }
                    /* catch() { ... } // from try @ 00ee4e8c with catch @ 00ee4eb4 */
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        uVar6 = FUN_01322618(*(long *)(unaff_x19 + 0x20),*(undefined8 *)(lVar4 + 0x10),
                             *(undefined8 *)OVR_OpenVR_IVRChaperone__GetPlayAreaSize_TypeInfo);
        puVar8 = (undefined8 *)StringLiteral_8279;
        if ((uVar6 & 1) != 0) goto LAB_00ee4eec;
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_00ac1158(*(long *)(unaff_x19 + 0x20),*(undefined8 *)(lVar4 + 0x10),
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
          if (iVar3 == *(int *)(unaff_x19 + 0x28)) {
            *(undefined8 *)(unaff_x19 + 0x28) = 0xffffffffffffffff;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


