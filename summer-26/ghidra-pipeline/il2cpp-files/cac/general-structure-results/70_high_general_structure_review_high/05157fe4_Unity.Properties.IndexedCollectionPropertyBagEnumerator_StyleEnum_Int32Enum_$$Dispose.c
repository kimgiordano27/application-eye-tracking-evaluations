/*
FUNCTION_NAME: Unity.Properties.IndexedCollectionPropertyBagEnumerator<StyleEnum<Int32Enum>>$$Dispose
ENTRY_POINT: 05157fe4
PROGRAM: cac-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
Unity_Properties_IndexedCollectionPropertyBagEnumerator<StyleEnum<Int32Enum>>__Dispose
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  ulong unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  do {
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == param_3) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05158028;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f4b594(unaff_x23,param_3,0);
LAB_05158028:
    in_stack_000000a8 = in_stack_00000048;
    in_stack_000000a0 = in_stack_00000040;
    in_stack_000000b8 = in_stack_00000058;
    in_stack_000000b0 = in_stack_00000050;
    in_stack_000000c8 = in_stack_00000068;
    in_stack_000000c0 = in_stack_00000060;
    in_stack_00000078 = in_stack_00000018;
    in_stack_00000070 = in_stack_00000010;
    in_stack_00000088 = in_stack_00000028;
    in_stack_00000080 = in_stack_00000020;
    in_stack_00000098 = in_stack_00000038;
    in_stack_00000090 = in_stack_00000030;
    uVar7 = (*(code *)*puVar2)(unaff_x23,&stack0x000000a0,&stack0x00000070,puVar2[1]);
    if ((uVar7 & 1) != 0) {
      return 1;
    }
    do {
      uVar5 = (uint)*(undefined8 *)(unaff_x24 + 0x18);
      if ((int)uVar5 <= unaff_w25) {
        thunk_FUN_03f786f8(PTR_DAT_09111b70);
        uVar3 = thunk_FUN_03f4e68c();
        uVar4 = thunk_FUN_03f786f8(PTR_DAT_09123c28);
        Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                  (uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar3);
      }
      if (uVar5 <= (uint)unaff_x26) {
LAB_051580b4:
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      unaff_w25 = unaff_w25 + 1;
      uVar1 = *(uint *)(unaff_x27 + (unaff_x29 & 0xffffffff) * (unaff_x28 & 0xffffffff) + 4);
      unaff_x26 = (ulong)uVar1;
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (uVar5 <= uVar1) goto LAB_051580b4;
      unaff_x29 = unaff_x26;
    } while (*(int *)(unaff_x27 + unaff_x26 * (unaff_x28 & 0xffffffff)) != unaff_w22);
    lVar6 = unaff_x27 + unaff_x26 * (unaff_x28 & 0xffffffff);
    in_stack_00000018 = unaff_x21[1];
    in_stack_00000010 = *unaff_x21;
    in_stack_00000028 = unaff_x21[3];
    in_stack_00000020 = unaff_x21[2];
    unaff_x23 = *(long **)(unaff_x20 + 0x30);
    in_stack_00000048 = *(undefined8 *)(lVar6 + 0x10);
    in_stack_00000040 = *(undefined8 *)(lVar6 + 8);
    in_stack_00000058 = *(undefined8 *)(lVar6 + 0x20);
    in_stack_00000050 = *(undefined8 *)(lVar6 + 0x18);
    in_stack_00000068 = *(undefined8 *)(lVar6 + 0x30);
    in_stack_00000060 = *(undefined8 *)(lVar6 + 0x28);
    in_stack_00000038 = unaff_x21[5];
    in_stack_00000030 = unaff_x21[4];
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_03f4b260(param_3);
    }
    param_1 = *unaff_x23;
  } while( true );
}


