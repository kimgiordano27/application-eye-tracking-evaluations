/*
FUNCTION_NAME: FUN_07116e40
ENTRY_POINT: 07116e40
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


bool FUN_07116e40(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,float param_4,
                 long *param_5,long *param_6,long param_7)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_24;
  
  if ((DAT_095455a3 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f91138);
    FUN_0403162c(PTR_DAT_08f91128);
    FUN_0403162c(PTR_DAT_08f91130);
    FUN_0403162c(PTR_DAT_08f8bda8);
    DAT_095455a3 = 1;
  }
  local_24 = 0.0;
  if (param_6 == (long *)0x0) goto LAB_07117254;
  if ((int)param_6[4] == -1) {
    return false;
  }
  if ((char)param_6[5] != '\0') {
    return false;
  }
  lVar1 = (**(code **)(*param_6 + 0x178))(param_6,*(undefined8 *)(*param_6 + 0x180));
  if (lVar1 == 0) goto LAB_07117254;
  FUN_086f574c(lVar1,0);
  if (0x7f800000 < (uint)ABS(param_4)) {
    return false;
  }
  lVar1 = (**(code **)(*param_6 + 0x178))(param_6,*(undefined8 *)(*param_6 + 0x180));
  if (lVar1 == 0) goto LAB_07117254;
  FUN_086f574c(lVar1,0);
  if (param_4 == 0.0) {
    return false;
  }
  lVar1 = (**(code **)(*param_6 + 0x178))(param_6,*(undefined8 *)(*param_6 + 0x180));
  if (lVar1 == 0) goto LAB_07117254;
  FUN_086f574c(lVar1,0);
  fVar12 = param_4;
  fVar7 = (float)FUN_07112e18(param_5);
  if (param_4 < fVar7) {
    lVar1 = (**(code **)(*param_6 + 0x178))(param_6,*(undefined8 *)(*param_6 + 0x180));
    if (lVar1 == 0) goto LAB_07117254;
    FUN_086f574c(lVar1,0);
    *(float *)(param_5 + 0x1a) = fVar12;
    if (param_5[2] == 0) goto LAB_07117254;
    FUN_086f574c(param_5[2],0);
    (**(code **)(*param_5 + 0x1c8))(param_3,fVar12,param_5,*(undefined8 *)(*param_5 + 0x1d0));
  }
  lVar1 = (**(code **)(*param_6 + 0x178))(param_6,*(undefined8 *)(*param_6 + 0x180));
  if (lVar1 == 0) goto LAB_07117254;
  FUN_086f574c(lVar1,0);
  fVar7 = fVar12;
  lVar1 = (**(code **)(*param_6 + 0x178))(param_6,*(undefined8 *)(*param_6 + 0x180));
  if ((lVar1 == 0) || (plVar2 = (long *)FUN_086ef654(lVar1,0), plVar2 == (long *)0x0))
  goto LAB_07117254;
  lVar1 = *plVar2;
  uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f8bda8) {
        puVar3 = (undefined8 *)(lVar1 + (long)(*piVar6 + 0x2e) * 0x10 + 0x138);
        goto System_Collections_Generic_List_Enumerator<SerializedCommand>__MoveNextRare;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20(plVar2,*(long *)PTR_DAT_08f8bda8,0x2e);
System_Collections_Generic_List_Enumerator<SerializedCommand>__MoveNextRare:
  fVar8 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
  if (param_5[0x12] == 0) goto LAB_07117254;
  uVar5 = FUN_06f0664c(param_5[0x12],(int)param_6[4],&local_24,*(undefined8 *)PTR_DAT_08f91138);
  if ((uVar5 & 1) == 0) {
    fVar9 = (float)FUN_07112e18(param_5);
  }
  else {
    fVar9 = (float)(**(code **)(*param_5 + 0x1f8))
                             (param_5,(int)param_6[4],*(undefined8 *)(*param_5 + 0x200));
  }
  if (param_5[0x14] == 0) goto LAB_07117254;
  fVar12 = fVar12 - fVar8;
  if (*(int *)(param_5[0x14] + 0x20) == 0) {
    if (fVar12 <= fVar9) {
      fVar8 = (float)FUN_07112fb8(param_5,*(undefined8 *)
                                           (*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0xb0));
      if ((param_5[2] == 0) || (lVar1 = *(long *)(param_5[2] + 0x328), lVar1 == 0))
      goto LAB_07117254;
      FUN_086f574c(lVar1,0);
      fVar11 = 0.0;
      fVar10 = 0.0;
      if (0.0 <= fVar8 - fVar7) {
        fVar10 = fVar8 - fVar7;
      }
      if (fVar10 <= 0.0) {
        bVar4 = false;
      }
      else {
        if (param_5[2] == 0) goto LAB_07117254;
        Zenject_InjectContext_<get_ParentContexts>d__52__System_IDisposable_Dispose(param_5[2],0);
        if ((param_5[2] == 0) || (lVar1 = *(long *)(param_5[2] + 0x338), lVar1 == 0))
        goto LAB_07117254;
        fVar7 = (float)FUN_087ed644(lVar1,0);
        bVar4 = (fVar12 - fVar9) + fVar7 <= fVar11;
      }
      *(bool *)(param_5 + 0x17) = bVar4;
    }
    else {
      *(undefined1 *)(param_5 + 0x17) = 0;
    }
  }
  fVar7 = local_24;
  if ((uVar5 & 1) == 0) {
LAB_071171b8:
    FUN_071163b4(fVar12,param_5,(int)param_6[4],
                 *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x248));
    FUN_07115368(fVar9,fVar12,param_5,
                 *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x250));
    lVar1 = param_5[0x14];
    if (lVar1 == 0) goto LAB_07117254;
    if (*(int *)(lVar1 + 0x20) == 0) {
      return true;
    }
  }
  else {
    if (DAT_09539e11 == '\0') {
      FUN_0403162c(PTR_DAT_08f67c68);
      DAT_09539e11 = '\x01';
    }
    fVar10 = ABS(fVar7);
    fVar8 = ABS(fVar12);
    if (ABS(fVar12) <= fVar10) {
      fVar8 = fVar10;
    }
    fVar11 = **(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) * 8.0;
    fVar10 = fVar8 * DAT_01a2ee44;
    if (fVar8 * DAT_01a2ee44 <= fVar11) {
      fVar10 = fVar11;
    }
    if (fVar10 <= ABS(fVar7 - fVar12)) goto LAB_071171b8;
    lVar1 = param_5[0x14];
    if (lVar1 == 0) goto LAB_07117254;
  }
  uVar5 = FUN_053d469c(lVar1,(int)param_6[4],*(undefined8 *)PTR_DAT_08f91128);
  if ((uVar5 & 1) == 0) {
    return false;
  }
  if (param_5[0x14] != 0) {
    return *(int *)(param_5[0x14] + 0x20) == 0;
  }
LAB_07117254:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


