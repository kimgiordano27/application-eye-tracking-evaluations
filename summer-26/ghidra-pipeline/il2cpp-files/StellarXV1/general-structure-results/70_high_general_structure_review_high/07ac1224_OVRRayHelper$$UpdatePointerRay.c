/*
FUNCTION_NAME: OVRRayHelper$$UpdatePointerRay
ENTRY_POINT: 07ac1224
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x07ac12a8) */

void OVRRayHelper__UpdatePointerRay(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *unaff_x24;
  long in_stack_00000000;
  int *in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  int *in_stack_00000038;
  long *in_stack_00000040;
  long in_stack_00000048;
  int *in_stack_00000050;
  long *in_stack_00000058;
  int in_stack_00000068;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 *in_stack_000000a0;
  long in_stack_000000f0;
  int *in_stack_000000f8;
  long *in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000110;
  int *in_stack_00000118;
  long *in_stack_00000120;
  undefined4 *in_stack_00000138;
  
  thunk_FUN_040d65a8(param_1);
  _in_stack_00000080 = FUN_06097a0c(&stack0x00000070,*(undefined8 *)PTR_DAT_092f2f48);
  uVar5 = FUN_06722d9c(&stack0x00000080,*(undefined8 *)PTR_DAT_092f2ee8);
  if ((uVar5 & 1) == 0) {
    in_stack_00000108._4_4_ = 0;
    *in_stack_00000138 = 0;
    uVar6 = *(undefined8 *)PTR_DAT_092f3088;
    *(undefined1 (*) [16])(in_stack_00000138 + 0x18) = _in_stack_00000080;
    FUN_051dde7c(in_stack_00000138 + 2,&stack0x00000080,in_stack_00000138,uVar6);
    iVar8 = 0x10;
  }
  else {
    lVar4 = FUN_06722e9c(&stack0x00000080,*(undefined8 *)PTR_DAT_092f2ee0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_05bcd750(&stack0x00000018,lVar4,*(undefined8 *)PTR_DAT_092f2f18);
    puVar2 = PTR_DAT_092f2f00;
    puVar1 = PTR_DAT_09288fb8;
    in_stack_00000098 = in_stack_00000020;
    in_stack_00000090 = in_stack_00000018;
    in_stack_000000a0 = in_stack_00000028;
    in_stack_00000020 = (long)&stack0x00000108 + 4;
    in_stack_00000018 = 0;
    in_stack_00000028 = &stack0x00000090;
    do {
      uVar5 = FUN_0712a3e4(&stack0x00000090,*(undefined8 *)puVar2);
      puVar3 = in_stack_000000a0;
      if ((uVar5 & 1) == 0) {
        iVar8 = 0x14;
        goto LAB_07ac1024;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar5 = FUN_07b323c4((ulong)puVar3 & 0xffffffff,0);
    } while ((uVar5 & 1) != 0);
    FUN_050ebd08(*(undefined8 *)(in_stack_00000138 + 10),(ulong)puVar3 & 0xffffffff,*unaff_x24);
    iVar8 = 0x13;
    in_stack_000000f8 = in_stack_00000008;
    in_stack_000000f0 = in_stack_00000000;
    in_stack_00000100 = in_stack_00000010;
LAB_07ac1024:
    if (in_stack_00000108._4_4_ < 0) {
      GLTFast_Jobs_CachedFunction_GetFloat3Int8Normalized_00000305_PostfixBurstDelegate__BeginInvoke
                (in_stack_00000028,*(undefined8 *)PTR_DAT_092f2ef8);
    }
    if ((iVar8 == 0x14) || (iVar8 == 0)) {
      iVar8 = 0x15;
    }
  }
  if (*in_stack_00000038 < 0) {
    FUN_066278f4(*in_stack_00000040 + 0x50,*(undefined8 *)PTR_DAT_092f2f68);
  }
  if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  if ((iVar8 == 0x15) || (iVar8 == 0)) {
    uVar6 = *unaff_x24;
    *(undefined8 *)(in_stack_00000138 + 0x14) = 0;
    *(undefined8 *)(in_stack_00000138 + 0x16) = 0;
    FUN_050ebd08(&stack0x00000030,*(undefined8 *)(in_stack_00000138 + 10),0,uVar6);
    iVar8 = 0x13;
    in_stack_000000f8 = in_stack_00000038;
    in_stack_000000f0 = in_stack_00000030;
    in_stack_00000100 = in_stack_00000040;
  }
  if (*in_stack_00000050 < 0) {
    FUN_05733c18(*in_stack_00000058 + 0x48,*(undefined8 *)PTR_DAT_092f3068);
  }
  if (in_stack_00000048 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  if (*in_stack_00000118 < 0) {
    FUN_05733c18(*in_stack_00000120 + 0x40,*(undefined8 *)PTR_DAT_092f3060);
  }
  puVar1 = PTR_DAT_092f3008;
  if (in_stack_00000110 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  if (iVar8 == 0x13) {
    *in_stack_00000138 = 0xfffffffe;
    in_stack_00000118 = in_stack_000000f8;
    in_stack_00000110 = in_stack_000000f0;
    in_stack_00000120 = in_stack_00000100;
    FUN_060727bc(in_stack_00000138 + 2,&stack0x00000110,*(undefined8 *)puVar1);
  }
  else if (iVar8 == 0) {
    uVar9 = *(undefined8 *)(&stack0x00000060 + (long)(in_stack_00000068 + -1) * 8);
    puVar7 = in_stack_00000138 + 2;
    *in_stack_00000138 = 0xfffffffe;
    uVar6 = thunk_FUN_040dedf8(PTR_DAT_092f3028);
    FUN_06072670(puVar7,uVar9,uVar6);
  }
  return;
}


