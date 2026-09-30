/*
FUNCTION_NAME: FUN_05ce3994
ENTRY_POINT: 05ce3994
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05ce3ca8) */
/* WARNING: Removing unreachable block (ram,0x05ce3d84) */
/* WARNING: Removing unreachable block (ram,0x05ce3e18) */
/* WARNING: Removing unreachable block (ram,0x05ce3e10) */
/* WARNING: Removing unreachable block (ram,0x05ce3d9c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_05ce3994(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  char local_54 [4];
  undefined8 local_50;
  long local_48;
  
  puVar3 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__;
  local_48 = param_1;
  if ((DAT_06dc2d57 & 1) == 0) {
    FUN_02d965b8(Method_System_IO_Enumeration_FileSystemEnumerable<FileSystemInfo>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__);
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_Add__);
    FUN_02d965b8(Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Clear__);
    DAT_06dc2d57 = 1;
  }
  local_50 = 0;
  local_54[0] = '\0';
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar4 = Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_Add__;
  uVar6 = FUN_05cd427c(0);
  puVar2 = PTR_DAT_069fc180;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05cd5218(param_1,0,*(undefined8 *)puVar4,0);
    plVar7 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,1);
    if ((*(long *)(param_1 + 0x50) == 0) || (plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar11 = *(long *)(*(long *)(param_1 + 0x50) + 0x10);
    if ((lVar11 != 0) &&
       (lVar8 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
      uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar9,0);
    }
    if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    plVar7[4] = lVar11;
    LeanTween__value(plVar7 + 4,lVar11);
    uVar9 = FUN_0540edec(*(undefined8 *)
                          Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Clear__,
                         plVar7,0);
    FUN_05cd42e0(param_1,uVar9,*(undefined8 *)puVar4,0);
  }
  puVar2 = Method_System_IO_Enumeration_FileSystemEnumerable<FileSystemInfo>__ctor__;
  if (*(long *)(param_1 + 0xe8) == 0) {
    if (*(char *)(param_1 + 0x61) != '\0') {
      thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
      uVar9 = thunk_FUN_02dd3144();
      uVar10 = thunk_FUN_02dfd288(
                                 Method_System_Collections_Generic_Dictionary<uint,_SpriteGlyph>_Clear__
                                 );
      FUN_054e8008(uVar9,uVar10,0);
      uVar10 = thunk_FUN_02dfd288(
                                 Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_AsList__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar9,uVar10);
    }
    *(undefined1 *)(param_1 + 0x61) = 1;
    if (*(long *)(param_1 + 0xa8) != 0) {
      FUN_0540e544(*(long *)(param_1 + 0xa8),0);
      param_1 = local_48;
    }
    uVar5 = FUN_05ce2738(param_1,1);
    plVar7 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_05cd3b10(plVar7,1,1,local_48,param_3,param_2,0);
    *(long **)(local_48 + 0x100) = plVar7;
    LeanTween__value(local_48 + 0x100,plVar7);
    if ((int)uVar5 < 1) {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      local_50 = FUN_05cd3bd8(plVar7,0);
      local_54[0] = '\0';
      FUN_0554bf68(local_50,local_54,0);
      UnityEngine_InputSystem_InputManager__PerformLayoutPostRegistration(local_48,1);
      FUN_05cd3db0(plVar7,0);
      if (local_54[0] != '\0') {
        thunk_FUN_02da42ec(local_50,0);
      }
      FUN_05ce2738(local_48,0);
    }
    else {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05cd3bd8(plVar7,0);
      FUN_05cd3db0(plVar7,0);
      if (uVar5 < 3) {
        local_50 = *(undefined8 *)(local_48 + 0x38);
        local_54[0] = '\0';
        FUN_0554bf68(local_50,local_54,0);
        if (2 < *(int *)(local_48 + 0xd8)) {
          plVar7 = (long *)0x0;
        }
        if (local_54[0] != '\0') {
          thunk_FUN_02da42ec(local_50,0);
        }
        if (plVar7 != (long *)0x0) goto LAB_05ce3b38;
      }
      plVar7 = *(long **)(local_48 + 0x100);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar11 = *(long *)puVar2;
      bVar1 = *(byte *)(lVar11 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar7);
      }
      if ((*(uint *)(plVar7 + 6) & 0x7fffffff) == 0) {
        FUN_05cf56bc(plVar7,0,0);
      }
    }
  }
  else {
    plVar7 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                         Method_System_IO_Enumeration_FileSystemEnumerable<FileSystemInfo>__ctor__
                                       );
    FUN_05cd3b08(plVar7,local_48,param_3,param_2,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05cf56bc(plVar7,*(undefined8 *)(local_48 + 0xe8),0);
  }
LAB_05ce3b38:
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_05cd427c(0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05cd5d64(local_48,0,*(undefined8 *)puVar4,0);
  }
  return plVar7;
}


