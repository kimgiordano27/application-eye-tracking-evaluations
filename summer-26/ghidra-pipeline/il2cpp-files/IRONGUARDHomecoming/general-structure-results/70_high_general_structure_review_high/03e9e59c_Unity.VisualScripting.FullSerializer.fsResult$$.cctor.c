/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsResult$$.cctor
ENTRY_POINT: 03e9e59c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsResult___cctor(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  
  if ((DAT_0483ab17 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<Vector3,_PolylinePoint>__);
    thunk_FUN_01efb3a4(PTR_DAT_0457b4e0);
    thunk_FUN_01efb3a4(PTR_DAT_0457b4e8);
    thunk_FUN_01efb3a4(PTR_DAT_0457b4f0);
    thunk_FUN_01efb3a4(PTR_DAT_0457b4f8);
    DAT_0483ab17 = 1;
  }
  puVar4 = PTR_DAT_0457b4f8;
  puVar3 = PTR_DAT_0457b4e0;
  puVar2 = Method_System_Linq_Enumerable_Select<Vector3,_PolylinePoint>__;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    iVar11 = 0;
    while (iVar1 = *(int *)(lVar7 + 0x18), iVar11 < iVar1) {
      lVar7 = FUN_03e9e090();
      if (((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) ||
         (plVar5 = (long *)FUN_030f28e4(*(long *)(lVar7 + 0x10),iVar11,*(undefined8 *)puVar4),
         plVar5 == (long *)0x0)) goto LAB_03e9e7f0;
      lVar8 = *plVar5;
      lVar7 = *(long *)puVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03e9e69c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar7,0);
LAB_03e9e69c:
      (*(code *)*puVar6)(plVar5,0,puVar6[1]);
      lVar7 = *(long *)(param_1 + 0x10);
      iVar11 = iVar11 + 1;
      if (lVar7 == 0) goto LAB_03e9e7f0;
    }
    if (0 < iVar1) {
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      FUN_0358d1e4(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_03e9e7f0;
      FUN_02ed8ef4(*(long *)(param_1 + 0x18),*(undefined8 *)puVar2);
    }
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 != 0) {
      iVar11 = 0;
      goto LAB_03e9e6fc;
    }
  }
LAB_03e9e7f0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_03e9e6fc:
  iVar1 = *(int *)(lVar7 + 0x18);
  if (iVar1 <= iVar11) {
    if (iVar1 < 1) {
      return;
    }
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    FUN_0358d1e4(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_02ed8ef4(*(long *)(param_1 + 0x28),*(undefined8 *)puVar2);
      return;
    }
    goto LAB_03e9e7f0;
  }
  lVar7 = FUN_03e9e090();
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x20) == 0)) ||
     (plVar5 = (long *)FUN_030f28e4(*(long *)(lVar7 + 0x20),iVar11,*(undefined8 *)puVar4),
     plVar5 == (long *)0x0)) goto LAB_03e9e7f0;
  lVar8 = *plVar5;
  lVar7 = *(long *)puVar3;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_03e9e778;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar7,0);
LAB_03e9e778:
  (*(code *)*puVar6)(plVar5,3,puVar6[1]);
  lVar7 = *(long *)(param_1 + 0x20);
  iVar11 = iVar11 + 1;
  if (lVar7 == 0) goto LAB_03e9e7f0;
  goto LAB_03e9e6fc;
}


