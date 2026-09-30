/*
FUNCTION_NAME: FUN_03e39e94
ENTRY_POINT: 03e39e94
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03e39e94(long param_1,long param_2,uint param_3,long param_4)

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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
                    /* try { // try from 03e39e9c to 03f39e9f has its CatchHandler @ 03e39f04 */
  if ((DAT_06a6a7d3 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a10);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    DAT_06a6a7d3 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04f428ec(3,0);
  }
  iVar1 = thunk_FUN_02ce9094(param_2,0);
  if (iVar1 != 1) {
    FUN_04f51a70(7,0);
  }
  iVar1 = thunk_FUN_02ce9050(param_2,0,0);
  if (iVar1 != 0) {
    FUN_04f51a70(6,0);
  }
  if ((int)param_3 < 0) {
    FUN_04f522f0(0);
  }
  iVar1 = Newtonsoft_Json_Schema_JsonSchemaModel__get_MaximumItems(param_2,0);
  iVar2 = FUN_03e397bc(param_1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x68));
  if ((int)(iVar1 - param_3) < iVar2) {
    FUN_04f51a70(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02ce0978(lVar5);
  }
  lVar5 = thunk_FUN_02cea798(param_2,lVar5);
  if (lVar5 == 0) {
    plVar10 = (long *)AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime(param_2,0);
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x428))(plVar10,*(undefined8 *)(*plVar10 + 0x430));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)PTR_DAT_065c89e8);
      }
      plVar4 = (long *)FUN_04f3fb68(uVar11,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2a0));
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_03e3a2bc;
          uVar8 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x2a0));
          if ((uVar8 & 1) == 0) {
            FUN_04f52328(0);
          }
        }
        plVar10 = (long *)thunk_FUN_02cea798(param_2,*(undefined8 *)PTR_DAT_065c8a10);
        if (plVar10 == (long *)0x0) {
          FUN_04f52328();
        }
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02ce0978(lVar5);
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto 
                System_Collections_ObjectModel_ReadOnlyCollection<OVRPlugin_Qpl_Annotation_Builder_Entry>___ctor
                ;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_02ce0a7c(plVar4,lVar5,0);
System_Collections_ObjectModel_ReadOnlyCollection<OVRPlugin_Qpl_Annotation_Builder_Entry>___ctor:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              plVar4 = *(long **)(param_1 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
              lVar5 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02ce0978(lVar5);
              }
              lVar6 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_03e3a1fc;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_02ce0a7c(plVar4,lVar5,0);
LAB_03e3a1fc:
              (*(code *)*puVar3)(&local_80,plVar4,iVar2,puVar3[1]);
              uStack_58 = uStack_78;
              local_60 = local_80;
              local_50 = local_70;
              lVar5 = thunk_FUN_02cea4e8(*(undefined8 *)
                                          (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28),
                                         &local_80);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_02cea798(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar11 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                FUN_02ce7b54(uVar11,0);
              }
              if (*(uint *)(plVar10 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
              iVar2 = iVar2 + 1;
              lVar6 = (long)(int)param_3;
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
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02ce0978(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_03e3a13c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(plVar10,lVar6,5);
LAB_03e3a13c:
                    /* WARNING: Could not recover jumptable at 0x03e3a160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar10,lVar5,param_3,puVar3[1]);
      return;
    }
  }
LAB_03e3a2bc:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


