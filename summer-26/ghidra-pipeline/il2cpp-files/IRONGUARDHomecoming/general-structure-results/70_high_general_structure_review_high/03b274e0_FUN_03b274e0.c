/*
FUNCTION_NAME: FUN_03b274e0
ENTRY_POINT: 03b274e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03b274e0(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined1 (*pauVar16) [16];
  long lVar17;
  undefined1 auVar18 [16];
  int local_178;
  undefined4 uStack_174;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_54;
  
  puVar2 = StringLiteral_11716;
  if ((DAT_048393bb & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_2794);
    thunk_FUN_01efb3a4(StringLiteral_11707);
    thunk_FUN_01efb3a4(StringLiteral_11619);
    thunk_FUN_01efb3a4(StringLiteral_11717);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(StringLiteral_11718);
    thunk_FUN_01efb3a4(StringLiteral_11716);
    thunk_FUN_01efb3a4(Method_System_DateTimeParse_ParseExact__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                      );
    thunk_FUN_01efb3a4(StringLiteral_11719);
    DAT_048393bb = 1;
  }
  local_70 = 0;
  local_d0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_035ac8e8(lVar6,0);
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(
                              Method_Drawing_CommandBuilder_Reserve<Color32,_CommandBuilder_CircleData>__
                              );
    FUN_034efd20(uVar8,uVar9,0);
    uVar9 = thunk_FUN_01efb3a4(StringLiteral_11720);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,uVar9);
  }
  *param_3 = 0;
  thunk_FUN_01f51358(param_3,0);
  *param_4 = 0;
  thunk_FUN_01f51358(param_4,0);
  auVar18 = FUN_03b1c7b8(param_1);
  if (lVar6 == 0) {
LAB_03b27998:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  pauVar16 = (undefined1 (*) [16])(lVar6 + 0x10);
  *pauVar16 = auVar18;
  thunk_FUN_01f51358(pauVar16,0);
  puVar3 = StringLiteral_11619;
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((param_2 < 0) || (iVar5 = *(int *)(lVar6 + 0x1c), iVar5 <= param_2)) {
    local_178 = param_2;
    uVar8 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar8 = thunk_FUN_01f113fc(uVar8,&local_178);
    FUN_01bc50c0(lVar6);
    thunk_FUN_01efb3a4(StringLiteral_11707);
    local_54 = *(undefined4 *)(lVar6 + 0x1c);
    uVar9 = thunk_FUN_01efb3a4(puVar2);
    uVar9 = thunk_FUN_01f113fc(uVar9,&local_54);
    uVar11 = thunk_FUN_01efb3a4(StringLiteral_11721);
    uVar8 = FUN_0340f334(uVar11,uVar8,param_1,uVar9,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar9 = thunk_FUN_01f117cc();
    uVar11 = thunk_FUN_01efb3a4(StringLiteral_11698);
    FUN_034f3578(uVar9,uVar8,uVar11,0);
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_11720);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar8);
  }
  FUN_02616114(&local_178,pauVar16,param_2,*(undefined8 *)StringLiteral_11619);
  memcpy(&local_120,&local_178,0x58);
  uVar7 = FUN_03b31370(&local_120,0);
  if ((uVar7 & 1) != 0) {
    FUN_02616114(&local_178,pauVar16,param_2,*(undefined8 *)puVar3);
    memcpy(&local_120,&local_178,0x58);
    uVar8 = FUN_03b35078(&local_120,0);
    FUN_03b4df5c(&local_178,uVar8,0);
    param_2 = param_2 + 1;
    *(int *)(lVar6 + 0x20) = param_2;
    iVar14 = param_2;
    if (param_2 < iVar5) {
      do {
        FUN_02616114(&local_178,pauVar16,param_2,*(undefined8 *)puVar3);
        memcpy(&local_120,&local_178,0x58);
        uVar7 = FUN_03b338bc(&local_120,0);
        iVar14 = param_2;
        if ((uVar7 & 1) == 0) break;
        param_2 = param_2 + 1;
        iVar14 = iVar5;
      } while (iVar5 != param_2);
      param_2 = *(int *)(lVar6 + 0x20);
    }
    *(int *)(lVar6 + 0x30) = iVar14 - param_2;
    uVar8 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                        );
    puVar15 = (undefined8 *)(lVar6 + 0x28);
    *puVar15 = uVar8;
    thunk_FUN_01f51358(puVar15,uVar8);
    puVar2 = Method_System_DateTimeParse_ParseExact__;
    if (0 < *(int *)(lVar6 + 0x30)) {
      uVar7 = 0;
      lVar17 = 0x20;
      do {
        uVar9 = FUN_03b2746c(param_1,(int)uVar7 + *(int *)(lVar6 + 0x20),param_5);
        uVar10 = FUN_0340eec4(uVar9,0);
        lVar12 = *(long *)(lVar6 + 0x28);
        uVar8 = *(undefined8 *)puVar2;
        if ((uVar10 & 1) == 0) {
          uVar8 = uVar9;
        }
        if (lVar12 == 0) goto LAB_03b27998;
        if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_03b2799c;
        *(undefined8 *)(lVar12 + lVar17) = uVar8;
        thunk_FUN_01f51358();
        uVar7 = uVar7 + 1;
        lVar17 = lVar17 + 8;
      } while ((long)uVar7 < (long)*(int *)(lVar6 + 0x30));
    }
    uVar8 = FUN_03b3d030(CONCAT44(uStack_174,local_178),0);
    uVar7 = FUN_0340eec4(uVar8,0);
    if ((uVar7 & 1) != 0) {
      FUN_024160d8(*(undefined8 *)
                    Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                   ,*puVar15,*(undefined8 *)StringLiteral_11717);
      return;
    }
    uVar9 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_2794);
    FUN_02e6c748(uVar9,lVar6,*(undefined8 *)StringLiteral_11718,0);
    FUN_03b52730(uVar8,uVar9,0);
    return;
  }
  lVar6 = *(long *)(param_1 + 200);
  if (lVar6 == 0) {
    FUN_03b1da04(param_1);
    lVar6 = *(long *)(param_1 + 200);
    if (lVar6 == 0) goto LAB_03b27998;
  }
  FUN_03b1c8ac(lVar6);
  lVar17 = *(long *)(lVar6 + 0x60);
  uVar4 = FUN_03b1dd98(param_1,param_2);
  if (lVar17 == 0) goto LAB_03b27998;
  iVar5 = FUN_03b398e4(lVar17,*(undefined4 *)(lVar6 + 0x58),uVar4,0);
  lVar6 = FUN_03b341d4(lVar17,0);
  pcVar1 = (char *)(lVar6 + (long)iVar5 * 0x20);
  if (*pcVar1 == '\0') {
    uVar8 = 0;
  }
  else {
    lVar6 = *(long *)(lVar17 + 0x18);
    if (lVar6 == 0) goto LAB_03b27998;
    uVar13 = (uint)*(ushort *)(pcVar1 + 0xe);
    if (*(uint *)(lVar6 + 0x18) <= uVar13) {
LAB_03b2799c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    uVar8 = *(undefined8 *)(lVar6 + (ulong)uVar13 * 8 + 0x20);
  }
  FUN_02616114(&local_178,pauVar16,param_2,*(undefined8 *)puVar3);
  memcpy(&local_c0,&local_178,0x58);
  uVar9 = FUN_03b3c210(&local_c0,0);
  uVar7 = FUN_0340eec4(uVar9,0);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_0340eec4(uVar9,0);
    if ((uVar7 & 1) != 0) goto LAB_03b2795c;
    uVar9 = FUN_03b3c210(&local_c0,0);
    uVar9 = FUN_03405678(uVar9,*(undefined8 *)StringLiteral_11719,0);
  }
  local_78 = uVar9;
  thunk_FUN_01f51358(&local_78);
LAB_03b2795c:
  FUN_03b3c678(&local_c0,param_3,param_4,param_5,uVar8,0);
  return;
}


