/*
FUNCTION_NAME: Amazon.Runtime.HttpRequestMessageFactory$$Dispose
ENTRY_POINT: 046a95a0
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


void Amazon_Runtime_HttpRequestMessageFactory__Dispose(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
                    /* try { // try from 046a95a0 to 047a95a3 has its CatchHandler @ 046a98d0 */
  plVar5 = (long *)FUN_04077674(param_1);
                    /* try { // try from 046a95b4 to 047a95bb has its CatchHandler @ 046a98cc */
  uStack000000000000000c = 0x40a33333;
  uVar6 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x24 + 0x78),&stack0x0000000c);
                    /* try { // try from 046a95cc to 047a95d7 has its CatchHandler @ 046a990c */
  uVar7 = FUN_0768890c(*(long *)(unaff_x24 + 0x78) + 0x20,0);
                    /* try { // try from 046a95e0 to 047a95e7 has its CatchHandler @ 046a9908 */
  FUN_07c13d48(uVar6,uVar7,0);
                    /* try { // try from 046a95f0 to 047a95f7 has its CatchHandler @ 046a9900 */
  lVar8 = FUN_07c2c3ec();
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 046a9608 to 047a960f has its CatchHandler @ 046a9934 */
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_040b4e00(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
LAB_046a9804:
      uVar6 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar6,0);
    }
    if ((int)plVar5[3] == 0) {
LAB_046a9800:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    plVar5[4] = lVar8;
    thunk_FUN_040ec700(plVar5 + 4,lVar8);
    puVar2 = PTR_DAT_092a36a0;
    if (unaff_x21 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_092a3698 + 0x130);
      if ((*(byte *)(*unaff_x21 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_092a3698)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0();
      }
    }
    uVar6 = FUN_07c3349c(0);
    in_stack_00000008 = 0x3c23d70a;
    uVar7 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x24 + 0x78),&stack0x00000008);
    uVar10 = FUN_0768890c(*(long *)(unaff_x24 + 0x78) + 0x20,0);
    uVar7 = FUN_07c13d48(uVar7,uVar10,0);
    uVar6 = FUN_07c2c140(uVar6,uVar7,0);
    lVar8 = FUN_04077674(*(undefined8 *)puVar2,1);
    if (lVar8 != 0) {
      if ((unaff_x20 != 0) && (lVar9 = thunk_FUN_040b4e00(), lVar9 == 0)) goto LAB_046a9804;
      puVar4 = PTR_DAT_092a3708;
      puVar3 = PTR_DAT_092a36f8;
      puVar2 = PTR_DAT_0929add0;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_046a9800;
      *(long *)(lVar8 + 0x20) = unaff_x20;
      thunk_FUN_040ec700();
      uVar6 = FUN_04fdb7e0(uVar6,lVar8,*(undefined8 *)puVar4);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)puVar2);
      }
      FUN_04a02928(uVar6,*(undefined8 *)puVar3);
      if (unaff_x19 != (long *)0x0) {
        lVar8 = *unaff_x19;
        uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09295238) {
              puVar11 = (undefined8 *)(lVar8 + (long)(*piVar13 + 4) * 0x10 + 0x138);
              goto LAB_046a97cc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar11 = (undefined8 *)FUN_040b1e00();
LAB_046a97cc:
        (*(code *)*puVar11)();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


