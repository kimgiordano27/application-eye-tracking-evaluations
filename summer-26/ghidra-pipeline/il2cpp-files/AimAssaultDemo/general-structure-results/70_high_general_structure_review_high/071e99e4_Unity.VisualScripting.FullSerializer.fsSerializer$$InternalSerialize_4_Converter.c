/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$InternalSerialize_4_Converter
ENTRY_POINT: 071e99e4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_6
*/


long Unity_VisualScripting_FullSerializer_fsSerializer__InternalSerialize_4_Converter(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  int iVar11;
  long lVar12;
  long unaff_x26;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 uStack0000000000000120;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  
                    /* try { // try from 071e99e4 to 072e99e7 has its CatchHandler @ 071e9a10 */
                    /* try { // try from 071e99e8 to 072e9a1f has its CatchHandler @ 071e94e4 */
  uStack0000000000000120 = 0;
  *(undefined8 *)(unaff_x26 + 0x88) = 0;
  *(undefined8 *)(unaff_x26 + 0x80) = 0;
  *(undefined8 *)(unaff_x26 + 0x98) = 0;
  *(undefined8 *)(unaff_x26 + 0x90) = 0;
  *(undefined8 *)(unaff_x26 + 0x68) = 0;
  *(undefined8 *)(unaff_x26 + 0x60) = 0;
  *(undefined8 *)(unaff_x26 + 0x78) = 0;
  *(undefined8 *)(unaff_x26 + 0x70) = 0;
  *(undefined8 *)(unaff_x26 + 0x48) = 0;
  *(undefined8 *)(unaff_x26 + 0x40) = 0;
  *(undefined8 *)(unaff_x26 + 0x58) = 0;
  *(undefined8 *)(unaff_x26 + 0x50) = 0;
  puVar3 = PTR_DAT_07dc2c50;
  if ((unaff_x20 != 0) && (unaff_x19 != 0)) {
    iVar1 = *(int *)(unaff_x20 + 0x18);
    if (iVar1 != *(int *)(unaff_x19 + 0x18)) {
                    /* try { // try from 071e9c5c to 072e9c63 has its CatchHandler @ 071e9fa0 */
      thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
      uVar8 = thunk_FUN_037788cc();
      uVar9 = thunk_FUN_037a15ac(System_Func<int,_int,_float,_int>_TypeInfo);
      FUN_061a843c(uVar8,uVar9,0);
      uVar9 = thunk_FUN_037a15ac(System_Func<Light,_Camera,_Vector3,_float>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar8,uVar9);
    }
                    /* catch() { ... } // from try @ 071e99e4 with catch @ 071e9a10 */
                    /* try { // try from 071e9a20 to 072e9a27 has its CatchHandler @ 071e9a3c */
    lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07dc2c48);
                    /* try { // try from 071e9a28 to 072e9a33 has its CatchHandler @ 071e94e4 */
    FUN_0490dae8(lVar6,*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_07dc2c58;
                    /* try { // try from 071e9a34 to 072e9a3b has its CatchHandler @ 071e9a3c */
    if (0 < iVar1) {
                    /* catch() { ... } // from try @ 071e9954 with catch @ 071e9a3c
                       catch() { ... } // from try @ 071e9a20 with catch @ 071e9a3c
                       catch() { ... } // from try @ 071e9a34 with catch @ 071e9a3c */
                    /* try { // try from 071e9a40 to 072e9c27 has its CatchHandler @ 071e9a40
                       catch() { ... } // from try @ 071e9a40 with catch @ 071e9a40
                       catch() { ... } // from try @ 071e9ebc with catch @ 071e9a40
                       catch() { ... } // from try @ 071e9f94 with catch @ 071e9a40
                       catch() { ... } // from try @ 071ea018 with catch @ 071e9a40
                       catch() { ... } // from try @ 071ea058 with catch @ 071e9a40 */
      iVar11 = 0;
      do {
        lVar7 = FUN_049cec24();
        if (lVar7 == 0) goto LAB_071e9c58;
        iVar4 = FUN_0757f960(lVar7,0);
        if (0 < iVar4) {
          iVar4 = 0;
          do {
            uStack0000000000000120 = 0;
            *(undefined8 *)(unaff_x26 + 0x88) = 0;
            *(undefined8 *)(unaff_x26 + 0x80) = 0;
            *(undefined8 *)(unaff_x26 + 0x98) = 0;
            *(undefined8 *)(unaff_x26 + 0x90) = 0;
            *(undefined8 *)(unaff_x26 + 0x68) = 0;
            *(undefined8 *)(unaff_x26 + 0x60) = 0;
            *(undefined8 *)(unaff_x26 + 0x78) = 0;
            *(undefined8 *)(unaff_x26 + 0x70) = 0;
            *(undefined8 *)(unaff_x26 + 0x48) = 0;
            *(undefined8 *)(unaff_x26 + 0x40) = 0;
            *(undefined8 *)(unaff_x26 + 0x58) = 0;
            *(undefined8 *)(unaff_x26 + 0x50) = 0;
            uVar8 = FUN_049cec24();
            FUN_07584ff0(&stack0x000000c0,uVar8,0);
            FUN_07585080(&stack0x000000c0,iVar4,0);
            FUN_049a519c(&stack0x00000198);
            in_stack_00000088 = in_stack_000001a0;
            in_stack_00000080 = in_stack_00000198;
            in_stack_00000098 = in_stack_000001b0;
            in_stack_00000090 = in_stack_000001a8;
            *(undefined8 *)(unaff_x26 + 0x28) = in_stack_000001c0;
            *(undefined8 *)(unaff_x26 + 0x20) = in_stack_000001b8;
            *(undefined8 *)(unaff_x26 + 0x38) = in_stack_000001d0;
            *(undefined8 *)(unaff_x26 + 0x30) = in_stack_000001c8;
            FUN_07585088(&stack0x000000c0,&stack0x00000080,0);
            memcpy(&stack0x00000018,&stack0x000000c0,0x68);
            if (lVar6 == 0) goto LAB_071e9c58;
            lVar12 = *(long *)puVar3;
            memcpy(&stack0x00000130,&stack0x00000018,0x68);
            lVar10 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_071e9c58;
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              memcpy((void *)(lVar10 + (long)(int)uVar2 * 0x68 + 0x20),&stack0x00000130,0x68);
            }
            else {
              uVar8 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
              memcpy(&stack0x00000198,&stack0x00000130,0x68);
              FUN_0490e404(lVar6,&stack0x00000198,uVar8);
            }
            iVar4 = iVar4 + 1;
            iVar5 = FUN_0757f960(lVar7,0);
          } while (iVar4 < iVar5);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != iVar1);
    }
    lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d94738);
    FUN_0757bf64(lVar7,0);
    if ((lVar7 != 0) && (FUN_0757c140(lVar7,1,0), lVar6 != 0)) {
      uVar8 = FUN_04910370(lVar6,*(undefined8 *)PTR_DAT_07dc2c60);
      FUN_07583fa4(lVar7,uVar8,0);
      return lVar7;
    }
  }
LAB_071e9c58:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


