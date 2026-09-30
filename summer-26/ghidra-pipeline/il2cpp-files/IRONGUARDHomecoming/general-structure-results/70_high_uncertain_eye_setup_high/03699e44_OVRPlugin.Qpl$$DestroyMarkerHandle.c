/*
FUNCTION_NAME: OVRPlugin.Qpl$$DestroyMarkerHandle
ENTRY_POINT: 03699e44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__DestroyMarkerHandle(void)

{
  undefined8 *puVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined4 *unaff_x20;
  long *plVar6;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  float unaff_s8;
  float unaff_s9;
  float fVar12;
  float unaff_s10;
  float fVar13;
  float unaff_s11;
  float fVar14;
  float fVar15;
  float unaff_s13;
  float fVar16;
  float fVar17;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_000000c8;
  
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar15 = *(float *)(lVar2 + 0x18);
  fVar17 = *(float *)(lVar2 + 0x1c);
  fVar16 = *(float *)(lVar2 + 0x20);
  if (*(char *)(unaff_x23 + 0x8ab) == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    *(undefined1 *)(unaff_x23 + 0x8ab) = 1;
  }
  fVar7 = fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17;
  fVar12 = unaff_s13 - unaff_s9;
  fVar13 = unaff_s11 - unaff_s10;
  fVar14 = in_stack_000000c8._4_4_ - unaff_s8;
  if (**(float **)
        (*(long *)
          Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__ +
        0xb8) <= fVar7) {
    fVar9 = fVar14 * fVar16 + fVar12 * fVar15 + fVar13 * fVar17;
    fVar12 = fVar12 - (fVar15 * fVar9) / fVar7;
    fVar13 = fVar13 - (fVar17 * fVar9) / fVar7;
    fVar14 = fVar14 - (fVar16 * fVar9) / fVar7;
  }
  if (DAT_0482ee9b == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee9b = '\x01';
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar15 = SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13);
  if (fVar15 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar12 = *pfVar3;
    fVar13 = pfVar3[1];
    fVar14 = pfVar3[2];
  }
  else {
    fVar12 = fVar12 / fVar15;
    fVar13 = fVar13 / fVar15;
    fVar14 = fVar14 / fVar15;
  }
  uVar10 = (ulong)(uint)fVar14;
  uVar4 = (ulong)(uint)fVar13;
  if (*(char *)(unaff_x21 + 0xe19) == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    *(undefined1 *)(unaff_x21 + 0xe19) = 1;
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  uVar11 = (ulong)*(uint *)(lVar2 + 0x18);
  uVar8 = FUN_04067568(fVar12,uVar4,uVar10,uVar11,*(undefined4 *)(lVar2 + 0x1c),
                       *(undefined4 *)(lVar2 + 0x20),0);
  plVar6 = *(long **)(unaff_x19 + 0x138);
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  FUN_0407b788(*unaff_x20,unaff_x20[1],unaff_x20[2],uVar8,uVar4,uVar10,uVar11,&stack0x00000040,0);
  uStack0000000000000074 = CONCAT44(in_stack_00000058,uStack0000000000000054);
  in_stack_00000068 = in_stack_00000048;
  in_stack_00000060 = in_stack_00000040;
  uStack000000000000006c = uStack000000000000004c;
  in_stack_00000070 = in_stack_00000050;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_0369a078;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__
                        ,2);
LAB_0369a078:
  (*(code *)*puVar1)(plVar6,&stack0x00000060,puVar1[1]);
  *(undefined8 *)(unaff_x19 + 0x14c) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000014;
  *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return;
}


