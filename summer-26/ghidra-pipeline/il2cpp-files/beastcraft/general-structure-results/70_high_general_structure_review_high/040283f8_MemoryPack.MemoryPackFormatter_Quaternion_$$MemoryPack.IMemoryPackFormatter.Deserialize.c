/*
FUNCTION_NAME: MemoryPack.MemoryPackFormatter<Quaternion>$$MemoryPack.IMemoryPackFormatter.Deserialize
ENTRY_POINT: 040283f8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x040285cc) */

void MemoryPack_MemoryPackFormatter<Quaternion>__MemoryPack_IMemoryPackFormatter_Deserialize
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  int unaff_w24;
  undefined1 auVar7 [12];
  long *in_stack_00000018;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_04028424;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_02e759c0(unaff_x21,param_3,0);
LAB_04028424:
        uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
        if ((uVar2 & 1) == 0) {
          if (in_stack_00000018 == (long *)0x0) {
            return;
          }
          lVar3 = *in_stack_00000018;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 == 0) goto LAB_04028574;
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_0402855c;
        }
        if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02e7568c(lVar3);
        }
        lVar4 = *in_stack_00000018;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar3) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_040284a8;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_02e759c0(in_stack_00000018,lVar3,0);
LAB_040284a8:
        auVar7 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
        lVar3 = *(long *)(unaff_x20 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        uVar5 = *(uint *)(unaff_x20 + 0x18);
        if (uVar5 == *(uint *)(lVar3 + 0x18)) {
          FUN_04026ca0();
          uVar5 = *(uint *)(unaff_x20 + 0x18);
          lVar3 = *(long *)(unaff_x20 + 0x10);
          *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
        }
        else {
          *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3cccc();
        }
        *(undefined1 (*) [12])(lVar3 + (long)(int)uVar5 * (long)unaff_w24 + 0x20) = auVar7;
        if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        param_1 = *in_stack_00000018;
        param_3 = *unaff_x23;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_x21 = in_stack_00000018;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
LAB_0402855c:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06a2ef10) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04028590;
    }
  }
LAB_04028574:
  puVar1 = (undefined8 *)FUN_02e759c0(in_stack_00000018,*(long *)PTR_DAT_06a2ef10,0);
LAB_04028590:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


