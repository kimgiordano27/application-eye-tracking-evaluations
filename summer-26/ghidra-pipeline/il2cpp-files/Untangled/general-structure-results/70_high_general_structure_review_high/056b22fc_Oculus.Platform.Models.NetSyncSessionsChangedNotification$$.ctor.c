/*
FUNCTION_NAME: Oculus.Platform.Models.NetSyncSessionsChangedNotification$$.ctor
ENTRY_POINT: 056b22fc
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Oculus_Platform_Models_NetSyncSessionsChangedNotification___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined1 in_w8;
  int *unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  *(undefined1 *)(unaff_x20 + 0x4f2) = in_w8;
  puVar1 = PTR_DAT_06d17428;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  lVar7 = *(long *)(unaff_x19 + 8);
  if (*unaff_x19 == 0) {
    _uStack0000000000000000 = *(undefined1 (*) [16])(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
    goto LAB_056b23a8;
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  iVar6 = ((*(int *)(lVar7 + 0x8c) + unaff_x19[10]) - *(int *)(lVar7 + 0x88)) + 1;
  unaff_x19[0xe] = iVar6;
  _uStack0000000000000000 = ZEXT816(0);
  while( true ) {
    lVar4 = FUN_0569f698(lVar7,(char)unaff_x19[0xb],iVar6,*(undefined8 *)(unaff_x19 + 0xc),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    auVar8 = Unity_Collections_LowLevel_Unsafe_UnsafeList<SelfCollisionConstraint_GridInfo>__CheckNull
                       (lVar4,0,*(undefined8 *)PTR_DAT_06d4daa8);
    _uStack0000000000000000 = auVar8;
    uVar5 = FUN_04a8bfb4();
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = _uStack0000000000000000;
      thunk_FUN_02f411dc(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_034f1104(unaff_x19 + 2);
      return;
    }
LAB_056b23a8:
    iVar3 = FUN_04a8c000();
    if (iVar3 == 0) break;
    iVar6 = unaff_x19[0xe] - iVar3;
    unaff_x19[0xe] = iVar6;
    if (iVar6 < 1) break;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
  *unaff_x19 = -2;
  puVar2 = PTR_DAT_06d17518;
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar7);
  }
  FUN_043aabc8(unaff_x19 + 2,iVar3 != 0,*(undefined8 *)puVar2);
  return;
}


