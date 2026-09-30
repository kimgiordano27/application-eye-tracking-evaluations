/*
FUNCTION_NAME: FUN_040d0334
ENTRY_POINT: 040d0334
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_040d0334(long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  
  if ((DAT_06bb58c8 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9648);
    DAT_06bb58c8 = 1;
  }
  local_48 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050e6f14(3,0);
  }
  iVar1 = thunk_FUN_02f177cc(param_2,0);
  if (iVar1 != 1) {
    FUN_050f5b58(7,0);
  }
  iVar1 = thunk_FUN_02f1778c(param_2,0,0);
  if (iVar1 != 0) {
    FUN_050f5b58(6,0);
  }
  if ((int)param_3 < 0) {
    FUN_050f63c0(0);
  }
  iVar1 = Newtonsoft_Json_Linq_JArray__FromObject(param_2,0);
  iVar2 = FUN_040cfc60(param_1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x68));
  if ((int)(iVar1 - param_3) < iVar2) {
    FUN_050f5b58(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
  }
  lVar5 = thunk_FUN_02f45174(param_2,lVar5);
  if (lVar5 == 0) {
    plVar10 = (long *)thunk_FUN_02f1863c(param_2,0);
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x418))(plVar10,*(undefined8 *)(*plVar10 + 0x420));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
      }
      plVar4 = (long *)FUN_050e4454(uVar11,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2a0));
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_040d075c;
          uVar8 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x2a0));
          if ((uVar8 & 1) == 0) {
            FUN_050f63f8(0);
          }
        }
        plVar10 = (long *)thunk_FUN_02f45174(param_2,*(undefined8 *)PTR_DAT_067c9648);
        if (plVar10 == (long *)0x0) {
          FUN_050f63f8();
        }
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02f41e9c(lVar5);
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto System_ReadOnlySpan<OVRPlugin_Vector4f>__get_IsEmpty;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_02f421d0(plVar4,lVar5,0);
System_ReadOnlySpan<OVRPlugin_Vector4f>__get_IsEmpty:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              plVar4 = *(long **)(param_1 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar5 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02f41e9c(lVar5);
              }
              lVar6 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_040d06a4;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_02f421d0(plVar4,lVar5,0);
LAB_040d06a4:
              (*(code *)*puVar3)(&local_68,plVar4,iVar2,puVar3[1]);
              uStack_78 = uStack_60;
              local_80 = local_68;
              local_70 = local_58;
              lVar5 = thunk_FUN_02f44ec4(*(undefined8 *)
                                          (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28),
                                         &local_80);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar11 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                FUN_02f0888c(uVar11,0);
              }
              if (*(uint *)(plVar10 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              lVar6 = (long)(int)param_3;
              iVar2 = iVar2 + 1;
              param_3 = param_3 + 1;
              plVar10[lVar6 + 4] = lVar5;
            } while (iVar2 != iVar1);
          }
          return;
        }
      }
    }
  }
  else {
    plVar10 = *(long **)(param_1 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto FUN_040d05e0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0(plVar10,lVar6,5);
FUN_040d05e0:
                    /* WARNING: Could not recover jumptable at 0x040d0604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar10,lVar5,param_3,puVar3[1]);
      return;
    }
  }
LAB_040d075c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


