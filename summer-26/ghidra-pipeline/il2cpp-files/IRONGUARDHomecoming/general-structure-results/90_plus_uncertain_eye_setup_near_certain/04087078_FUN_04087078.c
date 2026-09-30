/*
FUNCTION_NAME: FUN_04087078
ENTRY_POINT: 04087078
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_16;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x04087464) */

void FUN_04087078(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_045877d8;
                    /* try { // try from 040870b0 to 041870d7 has its CatchHandler @ 040875e8 */
  if ((DAT_0483ec2b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(PTR_DAT_045877e0);
    thunk_FUN_01efb3a4(PTR_DAT_045877e8);
                    /* try { // try from 040870e4 to 041870eb has its CatchHandler @ 040875c4 */
    thunk_FUN_01efb3a4(PTR_DAT_04587720);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_045877f0);
                    /* try { // try from 04087100 to 04187107 has its CatchHandler @ 040875e0 */
    thunk_FUN_01efb3a4(PTR_DAT_045877f8);
                    /* try { // try from 04087114 to 0418711b has its CatchHandler @ 04087594 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_13057);
    thunk_FUN_01efb3a4(PTR_DAT_04587800);
                    /* try { // try from 04087130 to 04187137 has its CatchHandler @ 040875cc */
    thunk_FUN_01efb3a4(PTR_DAT_045877d8);
                    /* try { // try from 04087144 to 0418714b has its CatchHandler @ 0408754c */
    thunk_FUN_01efb3a4(PTR_DAT_04587808);
    thunk_FUN_01efb3a4(PTR_DAT_04587810);
    DAT_0483ec2b = 1;
  }
                    /* try { // try from 04087160 to 04187167 has its CatchHandler @ 040875ac */
  local_60 = 0;
  uStack_58 = 0;
  lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar5,0);
  puVar1 = PTR_DAT_04587720;
                    /* try { // try from 04087174 to 0418717b has its CatchHandler @ 04087558 */
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_2;
    *(undefined8 *)(lVar5 + 0x18) = param_3;
    puVar4 = PTR_DAT_04587800;
    puVar3 = PTR_DAT_045877e8;
    puVar2 = PTR_DAT_045877e0;
    uVar12 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 04087190 to 04187197 has its CatchHandler @ 040875b4 */
                    /* try { // try from 0408719c to 041871b7 has its CatchHandler @ 040875c8 */
    uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
                    /* try { // try from 040871b8 to 041871cb has its CatchHandler @ 040875a8 */
    FUN_02e6c0a0(uVar6,lVar5,*(undefined8 *)puVar4,0);
    plVar7 = (long *)FUN_0230b6f4(uVar12,uVar6,*(undefined8 *)puVar3);
                    /* try { // try from 040871d8 to 041871df has its CatchHandler @ 04087540 */
    uVar8 = FUN_022e39c4(plVar7,*(undefined8 *)puVar2);
    if ((uVar8 & 1) == 0) {
      uStack_58 = *(undefined8 *)(lVar5 + 0x18);
      local_60 = *(undefined8 *)(lVar5 + 0x10);
                    /* try { // try from 04087274 to 0418728f has its CatchHandler @ 040875dc */
      uVar6 = FUN_03565264(&local_60,0);
      uVar6 = FUN_03405678(*(undefined8 *)PTR_DAT_04587810,uVar6,0);
                    /* try { // try from 04087298 to 0418729f has its CatchHandler @ 04087548 */
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
      }
                    /* try { // try from 040872b4 to 041872bb has its CatchHandler @ 0408759c */
      FUN_0403ed64(uVar6,0);
      return;
    }
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_13057);
                    /* try { // try from 040871f8 to 041871ff has its CatchHandler @ 0408753c */
    FUN_035ac8e8(lVar5,0);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x18) = param_4;
      *(undefined4 *)(lVar5 + 0x10) = param_5;
                    /* try { // try from 04087214 to 0418722f has its CatchHandler @ 040875bc */
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x18),param_4);
      if (plVar7 != (long *)0x0) {
        lVar10 = *plVar7;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
                    /* try { // try from 04087238 to 0418723f has its CatchHandler @ 04087590 */
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_045877f0) {
                    /* try { // try from 040872c8 to 041872cf has its CatchHandler @ 04087530 */
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_040872d0;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
                    /* try { // try from 04087258 to 0418725f has its CatchHandler @ 0408758c */
        puVar9 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045877f0,0);
LAB_040872d0:
        plVar7 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
        puVar3 = PTR_DAT_04587808;
        puVar2 = PTR_DAT_045877f8;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar10 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
                    /* try { // try from 04087314 to 0418731f has its CatchHandler @ 04087550 */
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_04087348;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
                    /* try { // try from 0408732c to 04187333 has its CatchHandler @ 04087538 */
          puVar9 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_04087348:
                    /* try { // try from 0408734c to 04187353 has its CatchHandler @ 04087534 */
          uVar8 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          if ((uVar8 & 1) == 0) {
                    /* try { // try from 040873cc to 041873ff has its CatchHandler @ 040875c0 */
            if (plVar7 == (long *)0x0) {
              return;
            }
            lVar5 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar8 == 0) goto LAB_0408740c;
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_040873f4;
          }
          lVar10 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
                    /* try { // try from 04087368 to 04187383 has its CatchHandler @ 040875a0 */
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_040873a4;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
                    /* try { // try from 0408738c to 04187393 has its CatchHandler @ 04087544 */
          puVar9 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_040873a4:
                    /* try { // try from 040873a8 to 041873af has its CatchHandler @ 04087570 */
          lVar10 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
                    /* try { // try from 040873b4 to 041873bb has its CatchHandler @ 0408757c */
          if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0280b3dc(*(long *)(lVar10 + 0x20),lVar5,*(undefined8 *)puVar3);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
LAB_040873f4:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* try { // try from 0408741c to 0418744f has its CatchHandler @ 0408756c */
      puVar9 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_04087428;
    }
  }
LAB_0408740c:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_04087428:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
                    /* try { // try from 04087450 to 041874db has its CatchHandler @ 04086d3c */
  return;
}


