/*
FUNCTION_NAME: FUN_02573d88
ENTRY_POINT: 02573d88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_02573d88(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long *plVar12;
  
  if ((DAT_0482fe0d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_DateTime_AddMonths__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddTicks__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddYears__);
    thunk_FUN_01efb3a4(Method_System_DateTime_CompareTo__);
    thunk_FUN_01efb3a4(Method_System_DateTime_DateToTicks__);
    thunk_FUN_01efb3a4(Method_System_DateTime_DaysInMonth__);
    DAT_0482fe0d = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_02574110;
    uVar9 = FUN_027ca850(*(long *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x44),
                         *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28));
    if ((uVar9 & 1) != 0) {
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x30), lVar5 == 0)) goto LAB_02574110;
      FUN_02741ef0(lVar5,*(undefined8 *)(param_1 + 0x38),
                   *(undefined8 *)Method_System_DateTime_DateToTicks__);
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (plVar11 = (long *)FUN_027ca938(*(long *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x44),
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30)),
         plVar11 == (long *)0x0)) goto LAB_02574110;
      lVar5 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02573fa4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_02573fa4:
      uVar7 = (*(code *)*puVar6)(plVar11,puVar6[1]);
      *(undefined8 *)(param_1 + 0x38) = uVar7;
      goto LAB_02573fb8;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x30), lVar5 == 0)) goto LAB_02574110;
    FUN_02741a7c(lVar5,*(undefined8 *)Method_System_DateTime_AddYears__);
    plVar12 = (long *)(param_1 + 0x20);
    plVar11 = (long *)*plVar12;
    if (plVar11 == (long *)0x0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_02574110;
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
      if (lVar5 == 0) {
        return 0;
      }
      *plVar12 = lVar5;
      thunk_FUN_01f51358(plVar12);
      plVar11 = (long *)*plVar12;
      if (plVar11 == (long *)0x0) goto LAB_02574110;
    }
    lVar5 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02573f7c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_02573f7c:
    uVar7 = (*(code *)*puVar6)(plVar11,puVar6[1]);
    *(undefined8 *)(param_1 + 0x38) = uVar7;
LAB_02573fb8:
    thunk_FUN_01f51358(param_1 + 0x38,uVar7);
  }
  puVar2 = Method_System_DateTime_CompareTo__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar6 = (undefined8 *)(param_1 + 0x38);
  plVar11 = (long *)*puVar6;
  if (plVar11 != (long *)0x0) {
    do {
      lVar5 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02574028;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar1,0);
LAB_02574028:
      bVar3 = (*(code *)*puVar8)(plVar11,puVar8[1]);
      *(byte *)(param_1 + 0x40) = bVar3 & 1;
      if ((bVar3 & 1) != 0) {
        plVar11 = (long *)*puVar6;
        if (plVar11 != (long *)0x0) {
          lVar5 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 == 0) goto LAB_025740c8;
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_025740b0;
        }
        break;
      }
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x30), lVar5 == 0)) break;
      if (*(int *)(lVar5 + 0x18) < 1) {
        return 0;
      }
      uVar7 = FUN_02741e90(lVar5,*(undefined8 *)puVar2);
      *puVar6 = uVar7;
      thunk_FUN_01f51358(puVar6,uVar7);
      plVar11 = (long *)*puVar6;
      if (plVar11 == (long *)0x0) break;
    } while( true );
  }
LAB_02574110:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_025740b0:
    if (*(long *)(piVar10 + -2) == *(long *)Method_System_DateTime_AddTicks__) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_025740e4;
    }
  }
LAB_025740c8:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)Method_System_DateTime_AddTicks__,0);
LAB_025740e4:
  uVar4 = (*(code *)*puVar6)(plVar11,puVar6[1]);
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return 1;
}


