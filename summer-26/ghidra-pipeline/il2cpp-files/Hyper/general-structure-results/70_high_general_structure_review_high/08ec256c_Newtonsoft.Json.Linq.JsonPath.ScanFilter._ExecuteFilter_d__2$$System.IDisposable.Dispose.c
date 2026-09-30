/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ScanFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 08ec256c
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


long Newtonsoft_Json_Linq_JsonPath_ScanFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
               (ulong param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(unaff_x21 + 0xa0);
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac6b430);
    FUN_04947ee4(PTR_DAT_0ac6f0a0);
    *(undefined1 *)(unaff_x20 + 0x110) = 1;
  }
  lVar3 = thunk_FUN_04983f60(*puVar9);
  FUN_08dbf2f0(lVar3,0);
  puVar1 = PTR_DAT_0ac6b430;
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac6b430) {
          puVar9 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08ec2600;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68();
LAB_08ec2600:
    bVar2 = (*(code *)*puVar9)();
    if (lVar3 != 0) {
      lVar5 = *(long *)puVar1;
      *(byte *)(lVar3 + 0x10) = bVar2 & 1;
      lVar6 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar9 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_08ec2668;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68();
LAB_08ec2668:
      uVar4 = (*(code *)*puVar9)();
      *(undefined8 *)(lVar3 + 0x18) = uVar4;
      thunk_FUN_049ee3d8();
      lVar5 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_08ec26d4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68();
LAB_08ec26d4:
      uVar4 = (*(code *)*puVar9)();
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      thunk_FUN_049ee3d8();
      lVar5 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_08ec2740;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68();
LAB_08ec2740:
      uVar4 = (*(code *)*puVar9)();
      *(undefined8 *)(lVar3 + 0x28) = uVar4;
      thunk_FUN_049ee3d8();
      lVar5 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_08ec27ac;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68();
LAB_08ec27ac:
      uVar4 = (*(code *)*puVar9)();
      *(undefined8 *)(lVar3 + 0x30) = uVar4;
      thunk_FUN_049ee3d8();
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


