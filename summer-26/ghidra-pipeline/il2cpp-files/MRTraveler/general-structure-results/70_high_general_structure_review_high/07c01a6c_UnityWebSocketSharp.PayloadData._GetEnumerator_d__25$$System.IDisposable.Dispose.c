/*
FUNCTION_NAME: UnityWebSocketSharp.PayloadData.<GetEnumerator>d__25$$System.IDisposable.Dispose
ENTRY_POINT: 07c01a6c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07c01b30) */

void UnityWebSocketSharp_PayloadData_<GetEnumerator>d__25__System_IDisposable_Dispose
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long *unaff_x24;
  
  if (param_2 != 1) {
    plVar2 = (long *)thunk_FUN_03cf5138();
    if (plVar2 != (long *)0x0) {
      lVar6 = *plVar2;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x07c01b18;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_03cf1348(plVar2,*unaff_x24,0);
code_r0x07c01b18:
      (*(code *)*puVar1)(plVar2,puVar1[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d91ca0(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch();
  lVar6 = *plVar2;
  __cxa_end_catch();
  plVar2 = (long *)thunk_FUN_03cf5138();
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07c01970;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348(plVar2,*unaff_x24,0);
LAB_07c01970:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28(lVar6);
  }
  return;
}


