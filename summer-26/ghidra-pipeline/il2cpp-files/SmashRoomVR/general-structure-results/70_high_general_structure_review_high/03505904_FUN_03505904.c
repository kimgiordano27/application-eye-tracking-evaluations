/*
FUNCTION_NAME: FUN_03505904
ENTRY_POINT: 03505904
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;telemetry_or_network_hits_8
*/


void FUN_03505904(undefined1 param_1 [16],ulong param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_120 [96];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
                    /* try { // try from 03505904 to 0360591b has its CatchHandler @ 035059e4 */
                    /* try { // try from 0350591c to 03605947 has its CatchHandler @ 0350584c */
  local_60 = param_4;
  uStack_58 = param_5;
  if ((DAT_03ff6da3 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_140);
    thunk_FUN_01ad9084(PTR_DAT_03d95c18);
                    /* try { // try from 03505948 to 0360594b has its CatchHandler @ 03505a00 */
    thunk_FUN_01ad9084(PTR_DAT_03d95c20);
    thunk_FUN_01ad9084(PTR_DAT_03d95c28);
                    /* try { // try from 03505964 to 0360596f has its CatchHandler @ 035059f8 */
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(StringLiteral_250);
                    /* try { // try from 03505978 to 03605983 has its CatchHandler @ 035059f4 */
    thunk_FUN_01ad9084(PTR_DAT_03d95c30);
                    /* try { // try from 03505988 to 03605997 has its CatchHandler @ 035059f0 */
    thunk_FUN_01ad9084(PTR_DAT_03d7f700);
                    /* try { // try from 03505998 to 036059b7 has its CatchHandler @ 0350584c */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d95c38);
    thunk_FUN_01ad9084(PTR_DAT_03d939a8);
                    /* try { // try from 035059b8 to 036059bb has its CatchHandler @ 03505a04 */
    DAT_03ff6da3 = 1;
  }
                    /* try { // try from 035059bc to 036059bf has its CatchHandler @ 035059fc */
                    /* try { // try from 035059c0 to 036059cf has its CatchHandler @ 0350584c */
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
                    /* try { // try from 035059d0 to 036059df has its CatchHandler @ 035059e4 */
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if (DAT_03fed2da == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
                    /* catch() { ... } // from try @ 03505904 with catch @ 035059e4
                       catch() { ... } // from try @ 035059d0 with catch @ 035059e4 */
                    /* try { // try from 035059e8 to 036059eb has its CatchHandler @ 03505a70 */
    DAT_03fed2da = '\x01';
  }
                    /* try { // try from 035059ec to 03605a1b has its CatchHandler @ 0350584c */
                    /* catch() { ... } // from try @ 03505988 with catch @ 035059f0 */
                    /* catch() { ... } // from try @ 03505978 with catch @ 035059f4 */
                    /* catch() { ... } // from try @ 03505964 with catch @ 035059f8 */
                    /* catch() { ... } // from try @ 035059bc with catch @ 035059fc */
                    /* catch() { ... } // from try @ 03505948 with catch @ 03505a00 */
                    /* catch() { ... } // from try @ 035059b8 with catch @ 03505a04 */
  uVar9 = (ulong)**(uint **)(*(long *)
                              Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ +
                            0xb8);
  uVar10 = (ulong)(*(uint **)(*(long *)
                               Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ +
                             0xb8))[1];
  lVar4 = FUN_03442384(&local_60,0);
  if ((lVar4 != 0) && (plVar8 = *(long **)(lVar4 + 0x78), plVar8 != (long *)0x0)) {
                    /* try { // try from 03505a1c to 03605a33 has its CatchHandler @ 03505a60 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_03d939a8 + 0x130);
                    /* try { // try from 03505a34 to 03605a4f has its CatchHandler @ 0350584c */
    if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_03d939a8)) {
                    /* try { // try from 03505a50 to 03605a5f has its CatchHandler @ 03505a60 */
      if (plVar8[0x2e] == 0) goto LAB_03505be0;
                    /* catch() { ... } // from try @ 03505a1c with catch @ 03505a60
                       catch() { ... } // from try @ 03505a50 with catch @ 03505a60 */
      uVar9 = FUN_029a5120(plVar8[0x2e],*(undefined8 *)StringLiteral_250);
                    /* try { // try from 03505a64 to 03605a67 has its CatchHandler @ 03505a70 */
                    /* try { // try from 03505a68 to 03605a73 has its CatchHandler @ 0350584c */
      uVar10 = param_2;
    }
  }
  puVar2 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  lVar4 = *(long *)(param_3 + 0x80);
                    /* catch() { ... } // from try @ 035059e8 with catch @ 03505a70
                       catch() { ... } // from try @ 03505a64 with catch @ 03505a70 */
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x104) = (int)uVar9;
    *(int *)(lVar4 + 0x108) = (int)uVar10;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar4 = FUN_03b26f4c(0);
    if (lVar4 != 0) {
      FUN_03b278e4(lVar4,*(undefined8 *)(param_3 + 0x80),*(undefined8 *)(param_3 + 0x78),0);
      puVar3 = PTR_DAT_03d95c20;
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      lVar4 = *(long *)(param_3 + 0x78);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) != 0) {
          FUN_02b94ee8(auStack_120,lVar4,*(undefined8 *)PTR_DAT_03d95c30);
          memcpy(&local_c0,auStack_120,0x60);
          do {
            uVar5 = FUN_0273c564(&local_c0,*(undefined8 *)puVar3);
            uVar7 = local_b0;
            if ((uVar5 & 1) == 0) {
              FUN_0273c560(&local_c0,*(undefined8 *)PTR_DAT_03d95c18);
              return;
            }
            uVar6 = FUN_0391c2b8(param_3,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar5 = FUN_0391f968(uVar7,uVar6,0);
          } while ((uVar5 & 1) != 0);
          FUN_0273c560(&local_c0,*(undefined8 *)PTR_DAT_03d95c18);
          uVar7 = FUN_03505c60(param_3);
          FUN_03504acc(uVar9,uVar10,param_3,uVar7);
          lVar4 = *(long *)(param_3 + 0x58);
          uVar7 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_140);
          FUN_0251b808(uVar7,param_3,*(undefined8 *)PTR_DAT_03d95c38,0);
          if (lVar4 == 0) goto LAB_03505be0;
          FUN_03440dd8(lVar4,uVar7,0);
        }
        return;
      }
    }
  }
LAB_03505be0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


