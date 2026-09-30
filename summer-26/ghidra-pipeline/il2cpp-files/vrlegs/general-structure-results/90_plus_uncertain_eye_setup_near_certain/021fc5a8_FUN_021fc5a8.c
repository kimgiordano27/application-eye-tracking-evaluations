/*
FUNCTION_NAME: FUN_021fc5a8
ENTRY_POINT: 021fc5a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 124
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021fc8ec) */

undefined4
FUN_021fc5a8(long param_1,long param_2,undefined8 param_3,undefined4 *param_4,long param_5)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined4 uVar9;
  long *plVar10;
  void *__s;
  ulong __n;
  int iVar11;
  void *__dest;
  ulong __n_00;
  undefined8 *__src;
  undefined4 *local_90 [3];
  char local_74 [4];
  undefined8 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_90[1] = param_4;
  if ((DAT_0412221c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbed20);
    DAT_0412221c = 1;
  }
  lVar5 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
  __n_00 = (ulong)*(uint *)(*(long *)(lVar5 + 0x68) + 0xfc);
  __n = (ulong)*(uint *)(*(long *)(lVar5 + 0x70) + 0xfc);
  uVar6 = __n_00 + 0xf & 0x1fffffff0;
  __src = (undefined8 *)((long)local_90 - uVar6);
  __dest = (void *)((long)__src - uVar6);
  __s = (void *)((long)__dest - (__n + 0xf & 0x1fffffff0));
  local_90[2] = *(undefined4 **)(param_1 + 0x48);
  local_74[0] = '\0';
  FUN_027e0bd8(local_90[2],local_74,0);
  if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  cVar1 = *(char *)(*(long *)(param_1 + 0x38) + 0x10);
  thunk_FUN_01a4b338();
  if (cVar1 == '\0') {
    plVar10 = *(long **)(param_1 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cbed20) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_021fc6e0;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03cbed20,0);
LAB_021fc6e0:
    uVar6 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x40);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      thunk_FUN_01a4b338();
      *(undefined1 *)(lVar5 + 0x10) = 1;
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      thunk_FUN_01a4b338();
      uVar9 = 0;
      *(undefined1 *)(lVar5 + 0x10) = 1;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar7 = *(long *)(lVar5 + 0x10);
      if ((lVar7 == 0x7fffffffffffffff) || ((lVar7 < 0 && (1 < -0x8000000000000000 - lVar7)))) {
        uVar4 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar4,param_5);
      }
      local_90[0] = (undefined4 *)(lVar7 + 1);
      *(undefined4 **)(lVar5 + 0x10) = local_90[0];
      plVar10 = *(long **)(param_1 + 0x10);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = **(long **)(*(long *)(param_5 + 0x20) + 0xc0);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8(lVar5);
      }
      lVar7 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            lVar5 = lVar7 + (long)*piVar8 * 0x10 + 0x138;
            goto HurricaneVR_Framework_Components_HVRPhysicsButton__OnButtonDown;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_01a472ec(plVar10,lVar5,0);
HurricaneVR_Framework_Components_HVRPhysicsButton__OnButtonDown:
      lVar5 = *(long *)(lVar5 + 8);
      local_70 = __src;
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar10,&local_70,__src);
      memset(__s,0,__n);
      lVar7 = *(long *)(param_5 + 0x20);
      lVar5 = *(long *)(lVar7 + 0xc0);
      if (*(int *)(*(long *)(lVar5 + 0x68) + 0x28) < 0) {
        memcpy(__dest,__src,__n_00);
        lVar5 = *(long *)(lVar7 + 0xc0);
      }
      else {
        __dest = (void *)*__src;
      }
      local_70 = (undefined8 *)local_90[0];
      FUN_02207c1c(__s,&local_70,__dest,*(undefined8 *)(lVar5 + 0x78));
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar11 = (int)*(undefined8 *)(param_2 + 0x18);
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      memcpy((void *)(param_2 + 0x20),__s,__n);
      lVar5 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
        iVar11 = (int)*(undefined8 *)(param_2 + 0x18);
      }
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_01ab6954(lVar5,(void *)(param_2 + 0x20),__s);
      uVar9 = 1;
      *local_90[1] = 1;
    }
  }
  else {
    uVar9 = 0;
  }
  if (local_74[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(local_90[2],0);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


