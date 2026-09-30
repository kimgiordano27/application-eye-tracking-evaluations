/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$Unity.Netcode.INetworkVariableSerializer<T>.ReadWithAllocator
ENTRY_POINT: 06371e10
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6
*/


long * Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__Unity_Netcode_INetworkVariableSerializer<T>_ReadWithAllocator
                 (void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  FUN_0675ff58();
  uVar4 = FUN_067690d8();
  if ((uVar4 & 1) == 0) {
    lVar6 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0675ff58(lVar6 + 0x20,0);
    uVar4 = FUN_067690d8();
    if ((uVar4 & 1) == 0) {
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090();
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0xe0));
      }
      plVar5 = (long *)FUN_0675ff58(uVar10,0);
      if (plVar5 == (long *)0x0) {
LAB_06372378:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar4 = (**(code **)(*plVar5 + 0x2b8))();
      if ((uVar4 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_08497490;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar10 = FUN_0675ff58(uVar10,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x24);
        }
        plVar5 = (long *)FUN_06792398(uVar10);
        lVar6 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03ac4090(lVar6);
        }
        plVar8 = *(long **)(lVar6 + 0xc0);
        goto LAB_06371eb0;
      }
      if (unaff_x20 == (long *)0x0) goto LAB_06372378;
      uVar4 = (**(code **)(*unaff_x20 + 0x3d8))();
      if ((uVar4 & 1) != 0) {
        uVar10 = (**(code **)(*unaff_x20 + 0x458))();
        uVar11 = *(undefined8 *)PTR_DAT_08495bc0;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0xe0));
        }
        uVar11 = FUN_0675ff58(uVar11,0);
        uVar4 = FUN_067690d8(uVar10,uVar11,0);
        if ((uVar4 & 1) != 0) {
          lVar6 = (**(code **)(*unaff_x20 + 0x478))();
          if (lVar6 == 0) goto LAB_06372378;
          if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0637237c:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          plVar5 = *(long **)(lVar6 + 0x20);
          if (plVar5 != (long *)0x0) {
            bVar1 = *(byte *)(*unaff_x24 + 0x130);
            if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8ad40(plVar5);
            }
          }
          uVar10 = *(undefined8 *)PTR_DAT_08497498;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          plVar8 = (long *)FUN_0675ff58(uVar10,0);
          plVar7 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d968,1);
          if (plVar7 == (long *)0x0) goto LAB_06372378;
          if ((plVar5 != (long *)0x0) &&
             (lVar6 = thunk_FUN_03ac73c0(plVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
            uVar10 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar10,0);
          }
          if ((int)plVar7[3] == 0) goto LAB_0637237c;
          plVar7[4] = (long)plVar5;
          thunk_FUN_03afed3c(plVar7 + 4,plVar5);
          if ((plVar8 == (long *)0x0) ||
             (plVar8 = (long *)(**(code **)(*plVar8 + 0x978))
                                         (plVar8,plVar7,*(undefined8 *)(*plVar8 + 0x980)),
             plVar8 == (long *)0x0)) goto LAB_06372378;
          uVar4 = (**(code **)(*plVar8 + 0x2b8))(plVar8,plVar5,*(undefined8 *)(*plVar8 + 0x2c0));
          if ((uVar4 & 1) != 0) {
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
      uVar4 = (**(code **)(*unaff_x20 + 0x5b8))();
      if ((uVar4 & 1) == 0) goto LAB_0637230c;
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
            lVar6 = *(long *)(unaff_x25 + 0xe0);
            puVar9 = (undefined8 *)PTR_DAT_084974c0;
          }
          else {
            lVar6 = *(long *)(unaff_x25 + 0xe0);
            puVar9 = (undefined8 *)PTR_DAT_084974a8;
          }
        }
        else {
          lVar6 = *(long *)(unaff_x25 + 0xe0);
          puVar9 = (undefined8 *)PTR_DAT_08497488;
        }
      }
      else {
LAB_0637225c:
        if (uVar3 != 5) {
LAB_0637230c:
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03ac4090();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          plVar5 = (long *)thunk_FUN_03ac74bc();
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03ac4090(lVar6);
          }
          FUN_05367824(plVar5,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
          return plVar5;
        }
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_084974b8;
      }
      uVar10 = *puVar9;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_0675ff58(uVar10,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*unaff_x24);
      }
Unity_Netcode_FallbackSerializer<bool>__WriteDelta:
      uVar10 = FUN_06792398(uVar10);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090(lVar6);
      }
      lVar6 = **(long **)(lVar6 + 0xc0);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090(lVar6);
      }
      plVar5 = (long *)FUN_035255bc(uVar10,lVar6);
      return plVar5;
    }
    plVar5 = (long *)thunk_FUN_03ac74bc(DAT_0861aa30);
    FUN_066fc4ac(plVar5,0);
  }
  else {
    plVar5 = (long *)thunk_FUN_03ac74bc(DAT_08615ba8);
    FUN_066fc3ac(plVar5,0);
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  plVar8 = *(long **)(lVar6 + 0xc0);
LAB_06371eb0:
  lVar6 = *plVar8;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090(lVar6);
  }
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar5);
    }
  }
  return plVar5;
}


