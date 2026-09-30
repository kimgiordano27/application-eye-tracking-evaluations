/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarPrimitive$$Sliced_UploadStreamBuffersAndDispose
ENTRY_POINT: 07822b10
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Oculus_Avatar2_OvrAvatarPrimitive__Sliced_UploadStreamBuffersAndDispose(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
                    /* try { // try from 07822b10 to 07922b1b has its CatchHandler @ 07822f20 */
  FUN_04077588(*(undefined8 *)(param_1 + 0x1f8));
  FUN_04077588(PTR_DAT_092e3bb8);
  *(undefined1 *)(unaff_x21 + 0x1cb) = 1;
                    /* try { // try from 07822b2c to 07922b2f has its CatchHandler @ 07822f04 */
                    /* try { // try from 07822b30 to 07922b3b has its CatchHandler @ 07822f1c */
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar1 = PTR_DAT_092bc860;
  if (unaff_x20 != 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_07822d00;
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092bc860) {
                    /* try { // try from 07822b94 to 07922baf has its CatchHandler @ 07822f74 */
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 8) * 0x10 + 0x138);
          goto LAB_07822b9c;
        }
        uVar5 = uVar5 - 1;
                    /* try { // try from 07822b74 to 07922b93 has its CatchHandler @ 07822f78 */
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_07822b9c:
    plVar3 = (long *)(*(code *)*puVar2)();
                    /* try { // try from 07822bb4 to 07922bbf has its CatchHandler @ 07822f70 */
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x22);
    }
    if (plVar3 == (long *)0x0) goto LAB_07822d00;
                    /* try { // try from 07822bc4 to 07922bcf has its CatchHandler @ 07822f54 */
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 07822bd4 to 07922bdf has its CatchHandler @ 07822f50 */
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 07822be4 to 07922bef has its CatchHandler @ 07822f6c */
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092e3be0) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_07822c1c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)PTR_DAT_092e3be0,1);
LAB_07822c1c:
                    /* try { // try from 07822c24 to 07922c2f has its CatchHandler @ 07822f40 */
    (*(code *)*puVar2)(plVar3);
                    /* try { // try from 07822c38 to 07922c57 has its CatchHandler @ 07822f5c */
    FUN_07822a7c();
  }
  if (*(int *)(*(long *)PTR_DAT_092e3bb8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
                    /* try { // try from 07822c58 to 07922c97 has its CatchHandler @ 07822610 */
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x22);
  }
  FUN_07822d04();
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 07822c98 to 07922ca3 has its CatchHandler @ 07822f28 */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 10) * 0x10 + 0x138);
          goto LAB_07822cd8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 07822cb8 to 07922cd7 has its CatchHandler @ 07822f34 */
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_07822cd8:
                    /* try { // try from 07822cec to 07922cf7 has its CatchHandler @ 07822f08 */
                    /* WARNING: Could not recover jumptable at 0x07822cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)();
    return;
  }
LAB_07822d00:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


