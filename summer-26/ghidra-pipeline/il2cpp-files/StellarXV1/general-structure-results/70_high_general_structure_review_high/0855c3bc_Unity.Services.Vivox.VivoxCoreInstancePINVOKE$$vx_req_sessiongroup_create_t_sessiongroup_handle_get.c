/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_create_t_sessiongroup_handle_get
ENTRY_POINT: 0855c3bc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined4
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_sessiongroup_handle_get
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  long *unaff_x19;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  long lVar11;
  undefined8 unaff_x27;
  long unaff_x28;
  long *plVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 unaff_s8;
  undefined8 uVar16;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  undefined8 in_stack_00000070;
  ulong in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined4 in_stack_00000180;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
  undefined8 uStack00000000000001a0;
  undefined8 uStack00000000000001a8;
  undefined8 uStack00000000000001b0;
  undefined8 uStack00000000000001b8;
  undefined4 in_stack_000001c0;
  undefined8 uStack00000000000001d0;
  undefined8 uStack00000000000001d8;
  undefined8 uStack00000000000001e0;
  undefined4 uStack00000000000001e8;
  undefined3 uStack00000000000001ed;
  
  plVar12 = *(long **)(unaff_x28 + 0x900);
  uStack0000000000000190 = param_2;
  uStack00000000000001a0 = param_2;
  uStack00000000000001b0 = param_2;
  uStack00000000000001d0 = param_2;
  uStack00000000000001e0 = param_2;
  if ((param_1 == 0) || (*(char *)(param_1 + 0xa8) == '\0')) {
    bVar3 = true;
  }
  else {
    uVar16 = *(undefined8 *)(param_1 + 0x94);
    if (DAT_09885777 == '\0') {
      FUN_04077588(PTR_DAT_09286e28);
      DAT_09885777 = '\x01';
    }
    fVar13 = (float)uVar16 - (float)**(undefined8 **)(*(long *)PTR_DAT_09286e28 + 0xb8);
    fVar15 = (float)((ulong)uVar16 >> 0x20) -
             (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_09286e28 + 0xb8) >> 0x20);
    bVar3 = DAT_01aeb71c <= fVar13 * fVar13 + fVar15 * fVar15;
  }
  puVar1 = PTR_DAT_09285978;
  in_stack_00000058 = unaff_x22[1];
  in_stack_00000050 = *unaff_x22;
  in_stack_00000068 = unaff_x22[3];
  in_stack_00000060 = unaff_x22[2];
  in_stack_00000078 = unaff_x22[5];
  in_stack_00000070 = unaff_x22[4];
  _uStack0000000000000080 = CONCAT44(uStack0000000000000084,*(undefined4 *)(unaff_x22 + 6));
  if (*(int *)(*plVar12 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar2 = PTR_DAT_0932c538;
  in_stack_00000158 = in_stack_00000058;
  in_stack_00000150 = in_stack_00000050;
  in_stack_00000168 = in_stack_00000068;
  in_stack_00000160 = in_stack_00000060;
  in_stack_00000180 = uStack0000000000000080;
  in_stack_00000178 = in_stack_00000078;
  in_stack_00000170 = in_stack_00000070;
  FUN_0855ad24(&stack0x00000210,0,&stack0x00000150,2,unaff_w23,unaff_w25,unaff_w24,
               *(undefined8 *)puVar1);
  if (!bVar3) {
    lVar11 = *unaff_x19;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar10 = FUN_0855a3bc(lVar11,&stack0x00000210,1);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
  }
  if (*unaff_x19 != 0) {
    uVar16 = *(undefined8 *)(*unaff_x19 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar10 = FUN_089ca704(uVar16,0,0);
    if ((uVar10 & 1) != 0) {
      if ((*unaff_x19 == 0) || (lVar11 = *(long *)(*unaff_x19 + 0x18), lVar11 == 0))
      goto LAB_0855c894;
      FUN_089ae0dc(&stack0x00000050,lVar11,0);
      if ((*unaff_x19 == 0) || (lVar11 = *(long *)(*unaff_x19 + 0x18), lVar11 == 0))
      goto LAB_0855c894;
      uVar6 = FUN_089a4830(lVar11,0);
      if ((*unaff_x19 == 0) || (lVar11 = *(long *)(*unaff_x19 + 0x18), lVar11 == 0))
      goto LAB_0855c894;
      uVar14 = FUN_089a49f8(lVar11,0);
      if ((*unaff_x19 == 0) || (lVar11 = *(long *)(*unaff_x19 + 0x18), lVar11 == 0))
      goto LAB_0855c894;
      uVar7 = FUN_089a4668(lVar11,0);
      if ((*unaff_x19 == 0) || (lVar11 = *(long *)(*unaff_x19 + 0x18), lVar11 == 0))
      goto LAB_0855c894;
      uVar8 = FUN_089a41d0(lVar11,0);
      lVar11 = *plVar12;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_040d65a8(lVar11);
      }
      in_stack_00000098 = in_stack_00000058;
      in_stack_00000090 = in_stack_00000050;
      in_stack_000000a8 = in_stack_00000068;
      in_stack_000000a0 = in_stack_00000060;
      in_stack_000000c0 = uStack0000000000000080;
      in_stack_000000b8 = in_stack_00000078;
      in_stack_000000b0 = in_stack_00000070;
      FUN_0855ad24(&stack0x000000d0,uVar14,&stack0x00000090,2,uVar6,uVar7,uVar8,
                   *(undefined8 *)puVar1);
      lVar11 = *unaff_x19;
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0855ae88(&stack0x000000d0,lVar11);
    }
  }
  puVar1 = PTR_DAT_092871d8;
  lVar11 = *(long *)PTR_DAT_092871d8;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *(long *)puVar1;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
  if (lVar11 != 0) {
    uVar10 = FUN_0855af54(lVar11,&stack0x00000210);
    if ((uVar10 & 1) == 0) {
      uStack0000000000000198 = unaff_x22[1];
      uStack0000000000000190 = *unaff_x22;
      uStack00000000000001a8 = unaff_x22[3];
      uStack00000000000001a0 = unaff_x22[2];
      uStack00000000000001b8 = unaff_x22[5];
      uStack00000000000001b0 = unaff_x22[4];
      in_stack_000001c0 = *(undefined4 *)(unaff_x22 + 6);
      iVar9 = FUN_089af740(&stack0x00000190,0);
      if (iVar9 == 0) {
        uVar6 = *(undefined4 *)((long)unaff_x22 + 0x1c);
      }
      else {
        uStack0000000000000198 = unaff_x22[1];
        uStack0000000000000190 = *unaff_x22;
        uStack00000000000001a8 = unaff_x22[3];
        uStack00000000000001a0 = unaff_x22[2];
        uStack00000000000001b8 = unaff_x22[5];
        uStack00000000000001b0 = unaff_x22[4];
        in_stack_000001c0 = *(undefined4 *)(unaff_x22 + 6);
        uVar6 = FUN_089af740(&stack0x00000190,0);
      }
      in_stack_000001c0 = *(undefined4 *)(unaff_x22 + 6);
      uStack00000000000001a8 = unaff_x22[3];
      uStack00000000000001a0 = unaff_x22[2];
      uStack00000000000001b8 = unaff_x22[5];
      uStack00000000000001b0 = unaff_x22[4];
      uStack00000000000001d0 = CONCAT44(uVar6,*(undefined4 *)((long)unaff_x22 + 0xc));
      uStack0000000000000198 = unaff_x22[1];
      uStack0000000000000190 = *unaff_x22;
      uStack00000000000001d8 = CONCAT44(unaff_w24,unaff_w25);
      uStack00000000000001e0 = CONCAT44(unaff_w24,unaff_w24);
      _uStack00000000000001e8 = (ulong)*(uint *)(unaff_x22 + 4);
      uVar4 = FUN_089afefc(&stack0x00000190,0);
      uStack0000000000000198 = unaff_x22[1];
      uStack0000000000000190 = *unaff_x22;
      uStack00000000000001a8 = unaff_x22[3];
      uStack00000000000001a0 = unaff_x22[2];
      _uStack00000000000001e8 =
           CONCAT35(uStack00000000000001ed,CONCAT14(uVar4,uStack00000000000001e8)) &
           0xffffff01ffffffff;
      uStack00000000000001b8 = unaff_x22[5];
      uStack00000000000001b0 = unaff_x22[4];
      in_stack_000001c0 = *(undefined4 *)(unaff_x22 + 6);
      uVar4 = FUN_089afeb4(&stack0x00000190,0);
      uStack0000000000000198 = unaff_x22[1];
      uStack0000000000000190 = *unaff_x22;
      uStack00000000000001a8 = unaff_x22[3];
      uStack00000000000001a0 = unaff_x22[2];
      _uStack00000000000001e8 =
           CONCAT26(uStack00000000000001ed._1_2_,CONCAT15(uVar4,_uStack00000000000001e8)) &
           0xffff01ffffffffff;
      uStack00000000000001b8 = unaff_x22[5];
      uStack00000000000001b0 = unaff_x22[4];
      in_stack_000001c0 = *(undefined4 *)(unaff_x22 + 6);
      uVar4 = FUN_089afed0(&stack0x00000190,0);
      uVar6 = *(undefined4 *)(unaff_x22 + 1);
      uStack0000000000000198 = unaff_x22[1];
      uStack0000000000000190 = *unaff_x22;
      uStack00000000000001a8 = unaff_x22[3];
      uStack00000000000001a0 = unaff_x22[2];
      uStack00000000000001b8 = unaff_x22[5];
      uStack00000000000001b0 = unaff_x22[4];
      in_stack_000001c0 = *(undefined4 *)(unaff_x22 + 6);
      _uStack00000000000001e8 =
           CONCAT17(uStack00000000000001ed._2_1_,CONCAT16(uVar4,_uStack00000000000001e8)) &
           0xff01ffffffffffff;
      uVar4 = UnityEngine_TextCore_Text_TextLib__GenerateTextInternal(&stack0x00000190,0);
      uStack0000000000000198 = unaff_x22[1];
      uStack0000000000000190 = *unaff_x22;
      uStack00000000000001a8 = unaff_x22[3];
      uStack00000000000001a0 = unaff_x22[2];
      uStack00000000000001b8 = unaff_x22[5];
      uStack00000000000001b0 = unaff_x22[4];
      in_stack_000001c0 = *(undefined4 *)(unaff_x22 + 6);
      uVar5 = FUN_089aff74(&stack0x00000190,0);
      uVar14 = *(undefined4 *)(unaff_x22 + 6);
      uVar7 = *(undefined4 *)(unaff_x22 + 5);
      uVar10 = (ulong)(CONCAT15(uVar5,CONCAT14(uVar4,uVar6)) & 0xff01ffffffff) & 0xffff01ffffffffff;
      thunk_FUN_040ec700(&stack0x00000208,unaff_x21);
      in_stack_00000058 = uStack00000000000001d8;
      in_stack_00000050 = uStack00000000000001d0;
      in_stack_00000068 = _uStack00000000000001e8;
      in_stack_00000060 = uStack00000000000001e0;
      in_stack_00000070 = CONCAT44(unaff_s8,unaff_w23);
      in_stack_00000078 = uVar10;
      _uStack0000000000000080 = CONCAT44(uVar7,uVar14);
      in_stack_00000088 = unaff_x21;
      if (*(int *)(*(long *)PTR_DAT_09326d38 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      in_stack_00000018 = in_stack_00000058;
      in_stack_00000010 = in_stack_00000050;
      in_stack_00000028 = in_stack_00000068;
      in_stack_00000020 = in_stack_00000060;
      in_stack_00000038 = in_stack_00000078;
      in_stack_00000030 = in_stack_00000070;
      in_stack_00000048 = in_stack_00000088;
      in_stack_00000040 = _uStack0000000000000080;
      lVar11 = FUN_0844cba4(unaff_x27,&stack0x00000010,0);
      *unaff_x19 = lVar11;
      thunk_FUN_040ec700();
    }
    return 1;
  }
LAB_0855c894:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


