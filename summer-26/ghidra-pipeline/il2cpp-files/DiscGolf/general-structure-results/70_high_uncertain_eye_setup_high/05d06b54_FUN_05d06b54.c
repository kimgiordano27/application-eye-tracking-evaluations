/*
FUNCTION_NAME: FUN_05d06b54
ENTRY_POINT: 05d06b54
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05d06f74) */
/* WARNING: Removing unreachable block (ram,0x05d06f6c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_05d06b54(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  char local_54 [4];
  
  if ((DAT_06dc2e54 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_Remove__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MethodInfo,_DebugMember>>>_set_Item__
                );
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_069fbff8);
    DAT_06dc2e54 = 1;
  }
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_Remove__;
  local_54[0] = '\0';
  if (param_1 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar4 = thunk_FUN_02dd3144();
    uVar13 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_8_0_TypeInfo);
    FUN_0544bf54(uVar4,uVar13,0);
    uVar13 = thunk_FUN_02dfd288(Method_System_Collections_Generic_HashSet<ulong>_GetEnumerator__);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar4,uVar13);
  }
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_Remove__
                + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05d0633c();
    local_54[0] = '\0';
    uVar4 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    FUN_0554bf68(uVar4,local_54,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar5 = *(long *)puVar1;
    }
    plVar6 = (long *)**(long **)(lVar5 + 0xb8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    puVar3 = 
    Method_System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MethodInfo,_DebugMember>>>_set_Item__
    ;
    puVar2 = PTR_DAT_069fbff8;
    puVar1 = PTR_DAT_069fbff0;
    do {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *plVar6;
      lVar5 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar5) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05d06cc8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02dd004c(plVar6,lVar5,0);
LAB_05d06cc8:
      uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar11 & 1) == 0) {
        lVar5 = 0;
        goto LAB_05d06e4c;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *plVar6;
      lVar5 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar5) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_05d06d30;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02dd004c(plVar6,lVar5,1);
LAB_05d06d30:
      lVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar13 = *(undefined8 *)puVar3;
      plVar8 = (long *)thunk_FUN_02dd3048(lVar5,uVar13);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(lVar5,uVar13);
      }
      lVar5 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_05d06dac;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)puVar3,1);
LAB_05d06dac:
      lVar5 = (*(code *)*puVar7)(plVar8,param_1,param_2,puVar7[1]);
    } while (lVar5 == 0);
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_05d06e2c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)puVar3,2);
LAB_05d06e2c:
    uVar13 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    *(undefined8 *)(lVar5 + 0x20) = uVar13;
    LeanTween__value();
LAB_05d06e4c:
    plVar6 = (long *)thunk_FUN_02dd3048(plVar6,*(undefined8 *)puVar1);
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      lVar9 = *(long *)puVar1;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05d06eb8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02dd004c(plVar6,lVar9,0);
LAB_05d06eb8:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
    }
    if (local_54[0] != '\0') {
      thunk_FUN_02da42ec(uVar4,0);
    }
  }
  return lVar5;
}


