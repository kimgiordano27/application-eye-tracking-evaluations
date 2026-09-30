/*
FUNCTION_NAME: Cysharp.Threading.Tasks.PlayerLoopTimer$$Dispose
ENTRY_POINT: 0573fc40
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


bool Cysharp_Threading_Tasks_PlayerLoopTimer__Dispose(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
                    /* try { // try from 0573fc44 to 0583fc4f has its CatchHandler @ 0573f9b8 */
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_0573fc88;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d87540();
LAB_0573fc88:
  plVar2 = (long *)(*(code *)*puVar1)();
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*unaff_x20 + 0x208))();
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar7 = *(undefined8 *)PTR_DAT_06652a78;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)System_Data_PropertyCollection_TypeInfo) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0573fd14;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d87540(plVar2,*(long *)System_Data_PropertyCollection_TypeInfo,0);
LAB_0573fd14:
    lVar4 = (*(code *)*puVar1)(plVar2,uVar3,uVar7,puVar1[1]);
    if (unaff_x21 == 0) {
      return true;
    }
    if (lVar4 == 0) {
      return true;
    }
    uVar3 = FUN_056e3610();
    uVar7 = FUN_056e3610(lVar4,0);
    uVar5 = FUN_04e7eb78(uVar3,uVar7,0);
    if ((uVar5 & 1) == 0) {
      uVar3 = FUN_056e35d8();
      uVar7 = FUN_056e35d8(lVar4,0);
      uVar5 = FUN_04e7eb78(uVar3,uVar7,0);
      if ((uVar5 & 1) == 0) {
        uVar3 = FUN_056e35e0();
        uVar7 = FUN_056e35e0(lVar4,0);
        uVar5 = FUN_04e7eb78(uVar3,uVar7,0);
        if ((uVar5 & 1) == 0) {
          return *(char *)((long)unaff_x20 + 0x195) == '\0' || *(char *)(unaff_x19 + 0x19) == '\0';
        }
      }
    }
  }
  return true;
}


