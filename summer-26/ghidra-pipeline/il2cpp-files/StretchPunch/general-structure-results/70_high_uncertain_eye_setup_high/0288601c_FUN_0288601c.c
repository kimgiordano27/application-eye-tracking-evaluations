/*
FUNCTION_NAME: FUN_0288601c
ENTRY_POINT: 0288601c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

void FUN_0288601c(long param_1,undefined8 *******param_2,long param_3)

{
  undefined8 *******__src;
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined8 *__dest;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *******local_70 [2];
  char local_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar8 = *(long *)(param_3 + 0x20);
  lVar3 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x20);
  uVar6 = (ulong)*(uint *)(lVar3 + 0xfc);
  __dest = (undefined8 *)((long)local_70 - (uVar6 + 0xf & 0x1fffffff0));
  local_70[0] = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    __src = param_2;
    if (-1 < *(int *)(lVar3 + 0x28)) {
      __src = local_70;
    }
    memcpy(__dest,__src,uVar6);
    if (lVar7 != 0) {
      lVar3 = *(long *)(lVar8 + 0xc0);
      puVar1 = *(undefined8 **)(lVar3 + 0x28);
      local_70[1] = (undefined8 *******)__dest;
      if (-1 < *(int *)(*(long *)(lVar3 + 0x20) + 0x28)) {
        local_70[1] = (undefined8 *******)*__dest;
      }
      (*(code *)puVar1[2])(*puVar1,puVar1,lVar7,local_70 + 1,local_5c);
      if (local_5c[0] != '\0') {
        lVar3 = *(long *)(param_3 + 0x20);
        plVar5 = *(long **)(param_1 + 0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x20) + 0x28)) {
          param_2 = local_70;
        }
        memcpy(__dest,param_2,uVar6);
        if (plVar5 == (long *)0x0) goto LAB_028861d4;
        lVar8 = *(long *)(lVar3 + 0xc0);
        lVar3 = *(long *)(lVar8 + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01dde7f8(lVar3);
          lVar8 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
        }
        if (-1 < *(int *)(*(long *)(lVar8 + 0x20) + 0x28)) {
          __dest = (undefined8 *)*__dest;
        }
        lVar8 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == lVar3) {
              lVar3 = lVar8 + (long)*piVar4 * 0x10 + 0x138;
              goto 
              System_Collections_Generic_Comparer<OVRPlugin_Qpl_Annotation_Builder_Entry>__CreateComparer
              ;
            }
            uVar6 = uVar6 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar6 != 0);
        }
        lVar3 = FUN_01dde8fc(plVar5,lVar3,0);
System_Collections_Generic_Comparer<OVRPlugin_Qpl_Annotation_Builder_Entry>__CreateComparer:
        lVar3 = *(long *)(lVar3 + 8);
        local_70[1] = (undefined8 *******)__dest;
        (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar5,local_70 + 1,__dest);
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_028861d4:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


