/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Vector4f>
ENTRY_POINT: 03ef73c4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ef7570) */

undefined8 System_Array__IndexOf<OVRPlugin_Vector4f>(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x25;
  long *in_stack_00000038;
  
  do {
                    /* try { // try from 03ef73cc to 03ff73d7 has its CatchHandler @ 03ef75b8 */
    if ((*(ushort *)(*(long *)(param_1 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
                    /* try { // try from 03ef73e8 to 03ff73eb has its CatchHandler @ 03ef75a4 */
    FUN_05e72aa4();
    FUN_05ca401c();
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar4 = *in_stack_00000038;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 03ef741c to 03ff742b has its CatchHandler @ 03ef75b4 */
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
                    /* try { // try from 03ef7448 to 03ff7463 has its CatchHandler @ 03ef75ac */
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03ef7450;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(in_stack_00000038,*unaff_x25,0);
LAB_03ef7450:
    uVar5 = (*(code *)*puVar1)(in_stack_00000038,puVar1[1]);
    if ((uVar5 & 1) == 0) {
      uVar2 = FUN_05ca69ec();
      if (in_stack_00000038 == (long *)0x0) {
        return uVar2;
      }
      lVar4 = *in_stack_00000038;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_03ef74dc;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
    }
    lVar3 = *in_stack_00000038;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03ef7398;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(in_stack_00000038,lVar4,0);
LAB_03ef7398:
    (*(code *)*puVar1)(in_stack_00000038,puVar1[1]);
    FUN_05ca3ecc();
    param_1 = *(long *)(unaff_x19 + 0x38);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
                    /* try { // try from 03ef74d8 to 03ff74e7 has its CatchHandler @ 03ef75c8 */
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03ef74f8;
    }
  }
LAB_03ef74dc:
  puVar1 = (undefined8 *)FUN_0367cd30(in_stack_00000038,*(long *)PTR_DAT_079f4598,0);
                    /* try { // try from 03ef74e8 to 03ff7563 has its CatchHandler @ 03ef71a0 */
LAB_03ef74f8:
  (*(code *)*puVar1)(in_stack_00000038,puVar1[1]);
  return uVar2;
}


