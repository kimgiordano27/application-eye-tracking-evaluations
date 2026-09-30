/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetLines
ENTRY_POINT: 057b9818
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

uint Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetLines
               (long param_1,undefined4 *******param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  void *__dest;
  ulong __n;
  void *__s;
  undefined8 *__dest_00;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 *******local_a0 [4];
  undefined4 *puStack_80;
  uint local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar7 = *(long *)(param_4 + 0x20);
  lVar5 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
  __n = (ulong)*(uint *)(lVar5 + 0xfc);
  uVar4 = __n + 0xf & 0x1fffffff0;
  __dest_00 = (undefined8 *)((long)local_a0 - uVar4);
  __dest = (void *)((long)__dest_00 - uVar4);
  __s = (void *)((long)__dest - uVar4);
  local_a0[0] = param_2;
  memset(__s,0,__n);
  local_a0[1] = *(undefined4 ********)(param_1 + 0x20);
  if (-1 < *(int *)(lVar5 + 0x28)) {
    param_2 = (undefined4 *******)local_a0;
  }
  memcpy(__dest_00,param_2,__n);
  lVar5 = *(long *)(lVar7 + 0xc0);
  puVar3 = *(undefined8 **)(lVar5 + 0x50);
  local_70 = *(undefined4 *)(param_1 + 0x14);
  local_a0[2] = (undefined4 *******)__dest_00;
  if (-1 < *(int *)(*(long *)(lVar5 + 0x38) + 0x28)) {
    local_a0[2] = (undefined4 *******)*__dest_00;
  }
  uStack_6c = 0;
  local_a0[3] = (undefined4 *******)&uStack_6c;
  puStack_80 = &local_70;
  (*(code *)puVar3[2])(*puVar3,puVar3,0,local_a0 + 1,&local_74);
  if ((int)local_74 < 0) {
LAB_057b9a64:
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return ~local_74 >> 0x1f;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar6 = *(long **)(param_1 + 0x20);
  uVar1 = *(int *)(param_1 + 0x14) - 1;
  *(uint *)(param_1 + 0x14) = uVar1;
  if (plVar6 != (long *)0x0) {
    if (uVar1 < *(uint *)(plVar6 + 3)) {
      memcpy(__dest_00,
             (void *)((long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * (long)(int)uVar1 + 0x20),
             __n);
      if (local_74 < *(uint *)(plVar6 + 3)) {
        memcpy((void *)((long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * (ulong)local_74 + 0x20),
               __dest_00,__n);
        lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4();
        }
        if (local_74 < *(uint *)(plVar6 + 3)) {
          FUN_02fe920c(lVar5,(long)plVar6 +
                             (ulong)*(uint *)(*plVar6 + 0x104) * (ulong)local_74 + 0x20,__dest_00);
          plVar6 = *(long **)(param_1 + 0x20);
          uVar1 = *(uint *)(param_1 + 0x14);
          memset(__s,0,__n);
          memcpy(__dest,__s,__n);
          if (plVar6 == (long *)0x0) goto LAB_057b9aa0;
          if (uVar1 < *(uint *)(plVar6 + 3)) {
            memcpy((void *)((long)plVar6 +
                           (ulong)*(uint *)(*plVar6 + 0x104) * (long)(int)uVar1 + 0x20),__dest,__n);
            lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02feb2c4();
            }
            if (uVar1 < *(uint *)(plVar6 + 3)) {
              FUN_02fe920c(lVar5,(long)plVar6 +
                                 (ulong)*(uint *)(*plVar6 + 0x104) * (long)(int)uVar1 + 0x20,__dest)
              ;
              *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
              goto LAB_057b9a64;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
LAB_057b9aa0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


