/*
FUNCTION_NAME: FUN_059bfcc4
ENTRY_POINT: 059bfcc4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x059bff9c) */

void FUN_059bfcc4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined1 auVar15 [16];
  
  puVar3 = PTR_DAT_069ff7d8;
  if ((DAT_06dc1502 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0db88);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(OVRPlugin_OVRP_1_122_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(OVRPlugin_OVRP_1_123_0_TypeInfo);
                    /* try { // try from 059bfd38 to 05abfd43 has its CatchHandler @ 059c0ac0 */
    FUN_02d965b8(OVRPlugin_OVRP_1_124_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff7d8);
                    /* try { // try from 059bfd48 to 05abfd57 has its CatchHandler @ 059c0abc */
    FUN_02d965b8(PTR_DAT_06a09470);
    FUN_02d965b8(PTR_DAT_06a0b298);
    DAT_06dc1502 = 1;
  }
  puVar7 = OVRPlugin_OVRP_1_122_0_TypeInfo;
  puVar6 = PTR_DAT_06a0db88;
  puVar5 = PTR_DAT_06a0b298;
  puVar4 = PTR_DAT_06a09470;
  puVar2 = PTR_DAT_069fbff8;
  puVar1 = PTR_DAT_069fbff0;
                    /* try { // try from 059bfd70 to 05abfd7b has its CatchHandler @ 059c0a48 */
  plVar8 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_05377f4c(plVar8,0);
  plVar9 = (long *)FUN_059b20a8(param_1);
  do {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar12 = *plVar9;
                    /* try { // try from 059bfdd0 to 05abfddf has its CatchHandler @ 059c09e8 */
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
                    /* try { // try from 059bfdec to 05abfdfb has its CatchHandler @ 059c0ad4 */
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                    /* try { // try from 059bfe0c to 05abfe13 has its CatchHandler @ 059c0a40 */
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_059bfe18;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar2,0);
LAB_059bfe18:
    uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                    /* try { // try from 059bfe24 to 05abfe2b has its CatchHandler @ 059c0a08 */
    if ((uVar13 & 1) == 0) {
      if (plVar9 == (long *)0x0) goto LAB_059bff5c;
      lVar12 = *plVar9;
                    /* try { // try from 059bff08 to 05abff0f has its CatchHandler @ 059c0a04 */
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto LAB_059bff34;
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar12 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
                    /* try { // try from 059bfe44 to 05abfe4b has its CatchHandler @ 059c0a8c */
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar7) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_059bfe7c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
                    /* try { // try from 059bfe5c to 05abfe5f has its CatchHandler @ 059c0a84 */
      } while (uVar13 != 0);
    }
                    /* try { // try from 059bfe64 to 05abfe6f has its CatchHandler @ 059c0a18 */
    puVar10 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar7,0);
LAB_059bfe7c:
                    /* try { // try from 059bfe80 to 05abfe87 has its CatchHandler @ 059c09e4 */
    auVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 059bff98 to 05abff9f has its CatchHandler @ 059c09dc */
      FUN_02d96860();
    }
                    /* try { // try from 059bfe94 to 05abfe9b has its CatchHandler @ 059c0a60 */
    FUN_053798ac(plVar8,auVar15._0_8_,0);
    FUN_053798ac(plVar8,*(undefined8 *)puVar4,0);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                    /* try { // try from 059bfec0 to 05abfecf has its CatchHandler @ 059c09fc */
      thunk_FUN_02df485c();
    }
    uVar11 = FUN_059b4a64(auVar15._0_8_,auVar15._8_8_);
                    /* try { // try from 059bfedc to 05abfee3 has its CatchHandler @ 059c09f4 */
    FUN_053798ac(plVar8,uVar11,0);
                    /* try { // try from 059bfee4 to 05abfef3 has its CatchHandler @ 059c09f0 */
    FUN_053798ac(plVar8,*(undefined8 *)puVar5,0);
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
                    /* try { // try from 059bff30 to 05abff37 has its CatchHandler @ 059c09cc */
    if (uVar13 == 0) break;
                    /* try { // try from 059bff1c to 05abff23 has its CatchHandler @ 059c09f8 */
    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                    /* try { // try from 059bff44 to 05abff4b has its CatchHandler @ 059c09c8 */
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_059bff50;
    }
  }
LAB_059bff34:
  puVar10 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar1,0);
LAB_059bff50:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_059bff5c:
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* try { // try from 059bff70 to 05abff73 has its CatchHandler @ 059c096c */
  (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
                    /* try { // try from 059bff78 to 05abff83 has its CatchHandler @ 059c0958 */
                    /* try { // try from 059bff84 to 05abff8b has its CatchHandler @ 059c0954 */
  return;
}


