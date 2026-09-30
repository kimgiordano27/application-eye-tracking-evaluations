/*
FUNCTION_NAME: FUN_03a40cf8
ENTRY_POINT: 03a40cf8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03a40f68) */

uint FUN_03a40cf8(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  
                    /* try { // try from 03a40cf8 to 03b40cfb has its CatchHandler @ 03a40d54 */
                    /* try { // try from 03a40cfc to 03b40d03 has its CatchHandler @ 03a40d6c */
                    /* try { // try from 03a40d04 to 03b40d0b has its CatchHandler @ 03a40d60 */
                    /* try { // try from 03a40d0c to 03b40d13 has its CatchHandler @ 03a40d78 */
                    /* catch() { ... } // from try @ 03a40560 with catch @ 03a40d14
                       try { // try from 03a40d14 to 03b40e37 has its CatchHandler @ 03a40190 */
                    /* catch() { ... } // from try @ 03a40534 with catch @ 03a40d18 */
  if ((DAT_04838c3e & 1) == 0) {
                    /* catch() { ... } // from try @ 03a40504 with catch @ 03a40d1c */
                    /* catch() { ... } // from try @ 03a404d4 with catch @ 03a40d20 */
                    /* catch() { ... } // from try @ 03a405e4 with catch @ 03a40d24 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* catch() { ... } // from try @ 03a40cec with catch @ 03a40d28 */
                    /* catch() { ... } // from try @ 03a405c4 with catch @ 03a40d2c */
                    /* catch() { ... } // from try @ 03a40ce4 with catch @ 03a40d30 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* catch() { ... } // from try @ 03a40cdc with catch @ 03a40d34 */
                    /* catch() { ... } // from try @ 03a40cd0 with catch @ 03a40d38 */
                    /* catch() { ... } // from try @ 03a40544 with catch @ 03a40d3c */
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_MethodCallExpression_GetArgument__);
                    /* catch() { ... } // from try @ 03a40514 with catch @ 03a40d40 */
                    /* catch() { ... } // from try @ 03a404dc with catch @ 03a40d44 */
                    /* catch() { ... } // from try @ 03a4098c with catch @ 03a40d48 */
    thunk_FUN_01efb3a4(StringLiteral_7226);
                    /* catch() { ... } // from try @ 03a4096c with catch @ 03a40d4c */
                    /* catch() { ... } // from try @ 03a408c4 with catch @ 03a40d50 */
                    /* catch() { ... } // from try @ 03a405fc with catch @ 03a40d54
                       catch() { ... } // from try @ 03a40cf8 with catch @ 03a40d54 */
    thunk_FUN_01efb3a4(StringLiteral_7220);
                    /* catch() { ... } // from try @ 03a405e0 with catch @ 03a40d58
                       catch() { ... } // from try @ 03a40cf4 with catch @ 03a40d58 */
                    /* catch() { ... } // from try @ 03a40598 with catch @ 03a40d5c */
    DAT_04838c3e = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
                    /* catch() { ... } // from try @ 03a40b64 with catch @ 03a40d60
                       catch() { ... } // from try @ 03a40d04 with catch @ 03a40d60 */
  if ((param_2 == 0) || (*(long *)(param_2 + 0x48) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* catch() { ... } // from try @ 03a40bd0 with catch @ 03a40d6c
                       catch() { ... } // from try @ 03a40cfc with catch @ 03a40d6c */
                    /* catch() { ... } // from try @ 03a40af8 with catch @ 03a40d78
                       catch() { ... } // from try @ 03a40d0c with catch @ 03a40d78 */
  plVar8 = (long *)FUN_0353f084(*(long *)(param_2 + 0x48),0);
  puVar6 = StringLiteral_7226;
  puVar5 = StringLiteral_7220;
  puVar4 = Method_System_Linq_Expressions_MethodCallExpression_GetArgument__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    do {
                    /* catch() { ... } // from try @ 03a407f4 with catch @ 03a40da4 */
      lVar12 = *plVar8;
                    /* catch() { ... } // from try @ 03a406b8 with catch @ 03a40da8 */
      lVar11 = *(long *)puVar3;
                    /* catch() { ... } // from try @ 03a40870 with catch @ 03a40dac */
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    /* catch() { ... } // from try @ 03a4099c with catch @ 03a40db0 */
      if (uVar13 != 0) {
                    /* catch() { ... } // from try @ 03a407e0 with catch @ 03a40db4 */
                    /* catch() { ... } // from try @ 03a40cb8 with catch @ 03a40db8 */
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 03a40cb0 with catch @ 03a40dbc */
                    /* catch() { ... } // from try @ 03a40ca8 with catch @ 03a40dc0 */
                    /* catch() { ... } // from try @ 03a407bc with catch @ 03a40dc4 */
          if (*(long *)(piVar14 + -2) == lVar11) {
                    /* catch() { ... } // from try @ 03a40804 with catch @ 03a40de4 */
                    /* catch() { ... } // from try @ 03a40730 with catch @ 03a40de8 */
                    /* catch() { ... } // from try @ 03a4068c with catch @ 03a40dec */
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03a40df0;
          }
                    /* catch() { ... } // from try @ 03a4066c with catch @ 03a40dc8 */
          uVar13 = uVar13 - 1;
                    /* catch() { ... } // from try @ 03a4079c with catch @ 03a40dcc */
          piVar14 = piVar14 + 4;
                    /* catch() { ... } // from try @ 03a40c9c with catch @ 03a40dd0 */
        } while (uVar13 != 0);
      }
                    /* catch() { ... } // from try @ 03a40720 with catch @ 03a40dd4 */
                    /* catch() { ... } // from try @ 03a40c98 with catch @ 03a40dd8 */
                    /* catch() { ... } // from try @ 03a4070c with catch @ 03a40ddc */
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,0);
                    /* catch() { ... } // from try @ 03a409e0 with catch @ 03a40de0 */
LAB_03a40df0:
                    /* catch() { ... } // from try @ 03a409fc with catch @ 03a40df0 */
                    /* catch() { ... } // from try @ 03a40cbc with catch @ 03a40df4 */
                    /* catch() { ... } // from try @ 03a40820 with catch @ 03a40df8
                       catch() { ... } // from try @ 03a40930 with catch @ 03a40df8 */
      uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                    /* catch() { ... } // from try @ 03a40cac with catch @ 03a40dfc
                       catch() { ... } // from try @ 03a40cb4 with catch @ 03a40dfc */
                    /* catch() { ... } // from try @ 03a4074c with catch @ 03a40e00
                       catch() { ... } // from try @ 03a40948 with catch @ 03a40e00 */
      if ((uVar7 & 1) == 0) goto LAB_03a40ec4;
                    /* catch() { ... } // from try @ 03a40ca0 with catch @ 03a40e04 */
      lVar12 = *plVar8;
                    /* catch() { ... } // from try @ 03a40c94 with catch @ 03a40e08 */
      lVar11 = *(long *)puVar3;
                    /* catch() { ... } // from try @ 03a40640 with catch @ 03a40e0c */
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    /* catch() { ... } // from try @ 03a40c90 with catch @ 03a40e10 */
      if (uVar13 != 0) {
                    /* catch() { ... } // from try @ 03a40a60 with catch @ 03a40e14 */
                    /* catch() { ... } // from try @ 03a40c8c with catch @ 03a40e18 */
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 03a408ec with catch @ 03a40e1c */
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_03a40e54;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
                    /* try { // try from 03a40e38 to 03b40e3b has its CatchHandler @ 03a410d4 */
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,1);
LAB_03a40e54:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
    } while ((char)plVar10[3] == '\0');
    lVar11 = plVar10[2];
    uVar13 = thunk_FUN_0340e318(lVar11,*(undefined8 *)puVar6,0);
  } while (((uVar13 & 1) != 0) ||
          (uVar13 = thunk_FUN_0340e318(lVar11,*(undefined8 *)puVar5,0), (uVar13 & 1) != 0));
LAB_03a40ec4:
  plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)puVar2);
  if (plVar8 != (long *)0x0) {
    lVar12 = *plVar8;
    lVar11 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03a40f2c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,0);
LAB_03a40f2c:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  return (uVar7 ^ 1) & 1;
}


