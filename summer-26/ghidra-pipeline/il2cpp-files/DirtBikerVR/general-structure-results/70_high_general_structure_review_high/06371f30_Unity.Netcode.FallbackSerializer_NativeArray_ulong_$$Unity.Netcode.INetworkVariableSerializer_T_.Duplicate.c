/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$Unity.Netcode.INetworkVariableSerializer<T>.Duplicate
ENTRY_POINT: 06371f30
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6
*/


long * Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__Unity_Netcode_INetworkVariableSerializer<T>_Duplicate
                 (undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long in_x9;
  int in_w10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  uVar10 = *(undefined8 *)(in_x9 + 0x28);
  if (in_w10 == 0) {
    thunk_FUN_03ae8be4(param_1);
  }
  plVar4 = (long *)FUN_0675ff58(uVar10,0);
  if (plVar4 == (long *)0x0) {
LAB_06372378:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar5 = (**(code **)(*plVar4 + 0x2b8))();
  if ((uVar5 & 1) != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_08497490;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar10 = FUN_0675ff58(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x24);
    }
    plVar4 = (long *)FUN_06792398(uVar10);
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03ac4090(lVar8);
    }
    lVar8 = **(long **)(lVar8 + 0xc0);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03ac4090(lVar8);
    }
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
      return plVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8ad40(plVar4);
  }
  if (unaff_x20 == (long *)0x0) goto LAB_06372378;
  uVar5 = (**(code **)(*unaff_x20 + 0x3d8))();
  if ((uVar5 & 1) != 0) {
    uVar10 = (**(code **)(*unaff_x20 + 0x458))();
    uVar11 = *(undefined8 *)PTR_DAT_08495bc0;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0xe0));
    }
    uVar11 = FUN_0675ff58(uVar11,0);
    uVar5 = FUN_067690d8(uVar10,uVar11,0);
    if ((uVar5 & 1) != 0) {
      lVar8 = (**(code **)(*unaff_x20 + 0x478))();
      if (lVar8 == 0) goto LAB_06372378;
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_0637237c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      plVar4 = *(long **)(lVar8 + 0x20);
      if (plVar4 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8ad40(plVar4);
        }
      }
      uVar10 = *(undefined8 *)PTR_DAT_08497498;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      plVar6 = (long *)FUN_0675ff58(uVar10,0);
      plVar7 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d968,1);
      if (plVar7 == (long *)0x0) goto LAB_06372378;
      if ((plVar4 != (long *)0x0) &&
         (lVar8 = thunk_FUN_03ac73c0(plVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
        uVar10 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar10,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_0637237c;
      plVar7[4] = (long)plVar4;
      thunk_FUN_03afed3c(plVar7 + 4,plVar4);
      if ((plVar6 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x978))
                                     (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x980)),
         plVar6 == (long *)0x0)) goto LAB_06372378;
      uVar5 = (**(code **)(*plVar6 + 0x2b8))(plVar6,plVar4,*(undefined8 *)(*plVar6 + 0x2c0));
      if ((uVar5 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_084974b0;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar10 = FUN_0675ff58(uVar10,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x24);
        }
        goto Unity_Netcode_FallbackSerializer<bool>__WriteDelta;
      }
    }
  }
  uVar5 = (**(code **)(*unaff_x20 + 0x5b8))();
  if ((uVar5 & 1) == 0) goto LAB_0637230c;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar10 = FUN_067850a4();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0xe0));
  }
  uVar3 = FUN_0676b950(uVar10,0);
  if (uVar3 < 0xd) {
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar2 & 0x740) == 0) {
      if ((uVar2 & 0x1800) == 0) {
        if (uVar3 != 7) goto LAB_0637225c;
        lVar8 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_084974c0;
      }
      else {
        lVar8 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_084974a8;
      }
    }
    else {
      lVar8 = *(long *)(unaff_x25 + 0xe0);
      puVar9 = (undefined8 *)PTR_DAT_08497488;
    }
  }
  else {
LAB_0637225c:
    if (uVar3 != 5) {
LAB_0637230c:
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03ac4090();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      plVar4 = (long *)thunk_FUN_03ac74bc();
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03ac4090(lVar8);
      }
      FUN_05367824(plVar4,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
      return plVar4;
    }
    lVar8 = *(long *)(unaff_x25 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_084974b8;
  }
  uVar10 = *puVar9;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar10 = FUN_0675ff58(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*unaff_x24);
  }
Unity_Netcode_FallbackSerializer<bool>__WriteDelta:
  uVar10 = FUN_06792398(uVar10);
  lVar8 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03ac4090(lVar8);
  }
  lVar8 = **(long **)(lVar8 + 0xc0);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03ac4090(lVar8);
  }
  plVar4 = (long *)FUN_035255bc(uVar10,lVar8);
  return plVar4;
}


