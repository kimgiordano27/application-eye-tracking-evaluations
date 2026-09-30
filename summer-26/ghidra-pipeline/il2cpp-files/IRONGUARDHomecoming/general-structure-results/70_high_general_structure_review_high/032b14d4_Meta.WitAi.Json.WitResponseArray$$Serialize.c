/*
FUNCTION_NAME: Meta.WitAi.Json.WitResponseArray$$Serialize
ENTRY_POINT: 032b14d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_WitResponseArray__Serialize(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  undefined4 in_stack_00000008;
  
  iVar1 = (**(code **)(param_1 + (long)(*in_x10 + 6) * 0x10 + 0x138))();
  lVar4 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x22) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 8) * 0x10 + 0x138);
        goto LAB_032b1544;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_032b1544:
  lVar4 = (*(code *)*puVar2)();
  if (iVar1 < 0) {
    if (((lVar4 != 0) && (lVar4 = FUN_0390b368(lVar4,0), lVar4 != 0)) &&
       (lVar4 = FUN_0390b70c(lVar4,0), lVar4 != 0)) {
      FUN_0390b988(lVar4,*(undefined8 *)Method_System_Linq_Enumerable_ElementAt<Column>__,0);
      return;
    }
  }
  else {
    in_stack_00000008 = unaff_w20;
    uVar3 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18)
                               ,&stack0x00000008);
    if (lVar4 != 0) {
      FUN_03914a34(lVar4,iVar1,uVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


