/*
FUNCTION_NAME: FUN_047a834c
ENTRY_POINT: 047a834c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 173
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x047a87dc) */
/* WARNING: Removing unreachable block (ram,0x047a8824) */

void FUN_047a834c(long *param_1,uint param_2,long *param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  long **pplStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_38;
  
  if ((DAT_07ed9893 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(PTR_DAT_079f49a8);
    DAT_07ed9893 = 1;
  }
  local_38 = (long *)0x0;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(6,0);
  }
  if (*(uint *)(param_1 + 3) < param_2) {
    FUN_05e39914(0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
  }
  plVar4 = (long *)thunk_FUN_0367fd24(param_3,lVar6);
  if (plVar4 == (long *)0x0) {
    if ((int)param_2 < (int)param_1[3]) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      lVar7 = *param_3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_047a8618;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_0367cd30(param_3,lVar6,0);
LAB_047a8618:
      plVar4 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
      puVar2 = PTR_DAT_079f49a8;
      pplStack_68 = &local_38;
      local_70 = 0;
      do {
        local_38 = plVar4;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar6 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_IsCreated;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)puVar2,0);
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_IsCreated:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        plVar4 = local_38;
        if ((uVar9 & 1) == 0) {
          if (local_38 == (long *)0x0) goto LAB_047a87f8;
          lVar6 = *local_38;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 == 0) goto LAB_047a87a8;
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_047a8790;
        }
        if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x140);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0367c9fc(lVar6);
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_047a8710;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_0367cd30(plVar4,lVar6,0);
LAB_047a8710:
        (*(code *)*puVar5)(&local_88,plVar4,puVar5[1]);
        uStack_58 = uStack_80;
        local_60 = local_88;
        local_50 = local_78;
        FUN_047a80d8(param_1,param_2,&local_60,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158));
        param_2 = param_2 + 1;
        plVar4 = local_38;
      } while( true );
    }
    FUN_047a9114(param_1,param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40)
                );
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc(lVar6);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_047a84d4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0367cd30(plVar4,lVar6,0);
LAB_047a84d4:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (0 < iVar3) {
      FUN_047a77d8(param_1,(int)param_1[3] + iVar3,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
      iVar1 = (int)param_1[3] - param_2;
      if (iVar1 != 0 && (int)param_2 <= (int)param_1[3]) {
        FUN_05e3b3a4(param_1[2],param_2,param_1[2],iVar3 + param_2,iVar1,0);
      }
      lVar6 = param_1[2];
      if (plVar4 == param_1) {
        FUN_05e3b3a4(lVar6,0,lVar6,param_2,param_2,0);
        FUN_05e3b3a4(param_1[2],iVar3 + param_2,param_1[2],param_2 << 1,(int)param_1[3] - param_2,0)
        ;
      }
      else {
        lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0367c9fc(lVar7);
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_047a85e8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_0367cd30(plVar4,lVar7,5);
LAB_047a85e8:
        (*(code *)*puVar5)(plVar4,lVar6,param_2,puVar5[1]);
      }
      *(int *)(param_1 + 3) = (int)param_1[3] + iVar3;
    }
  }
LAB_047a87f8:
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_047a8790:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_047a87c4;
    }
  }
LAB_047a87a8:
  puVar5 = (undefined8 *)FUN_0367cd30(local_38,*(long *)PTR_DAT_079f4598,0);
LAB_047a87c4:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  goto LAB_047a87f8;
}


