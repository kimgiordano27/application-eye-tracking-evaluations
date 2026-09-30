/*
FUNCTION_NAME: FUN_01f087d0
ENTRY_POINT: 01f087d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_01f087d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  char local_54 [4];
  
  if ((DAT_03780181 & 1) == 0) {
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f1778);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<RaycastResult>_MoveNext__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<string,_JsonParser_JsonValue>_get_Value__
                      );
    thunk_FUN_00d48444(StringLiteral_6758);
    DAT_03780181 = 1;
  }
  puVar1 = StringLiteral_6758;
  local_54[0] = '\0';
  lVar10 = *(long *)(param_1 + 0x60);
  if (lVar10 == 0) goto LAB_01f08e4c;
  if (*(long *)(lVar10 + 0x20) != 0) {
    if (*(char *)(*(long *)(lVar10 + 0x20) + 0x72) != '\0') {
      uVar4 = *(undefined8 *)(lVar10 + 0x30);
      uVar7 = *(undefined8 *)(lVar10 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_033f1778 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_01ed068c(uVar4,uVar7,0);
      FUN_01fadc24(param_1,*(undefined8 *)puVar1,uVar4,0);
      lVar10 = *(long *)(param_1 + 0x60);
      if (lVar10 == 0) goto LAB_01f08e4c;
    }
    if ((*(long *)(lVar10 + 0x20) == 0) || (*(long *)(param_1 + 0x50) == 0)) goto LAB_01f08e4c;
    FUN_01f34e28(*(long *)(param_1 + 0x50),*(undefined8 *)(*(long *)(lVar10 + 0x20) + 0x28),0);
    plVar5 = *(long **)(param_1 + 0x50);
    if (plVar5 == (long *)0x0) goto LAB_01f08e4c;
    uVar6 = (**(code **)(*plVar5 + 0x218))(plVar5,*(undefined8 *)(*plVar5 + 0x220));
    if ((uVar6 & 1) == 0) {
LAB_01f088f0:
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_01f08e4c;
      FUN_01f34e60(*(long *)(param_1 + 0x50),0,0);
      lVar10 = *(long *)(param_1 + 0x60);
      if (lVar10 == 0) goto LAB_01f08e4c;
    }
    else {
      lVar10 = *(long *)(param_1 + 0x60);
      if (lVar10 == 0) goto LAB_01f08e4c;
      if (*(char *)(lVar10 + 0x10) != '\0') goto LAB_01f088f0;
      if (*(long *)(lVar10 + 0x20) == 0) goto LAB_01f08e4c;
      if (*(long *)(*(long *)(lVar10 + 0x20) + 0x40) == 0) goto LAB_01f088f0;
      lVar10 = *(long *)(param_1 + 0x50);
      uVar4 = FUN_01f0a67c();
      if (lVar10 == 0) goto LAB_01f08e4c;
      FUN_01f34e60(lVar10,uVar4,0);
      lVar10 = *(long *)(param_1 + 0x60);
      if (lVar10 == 0) goto LAB_01f08e4c;
      *(undefined1 *)(lVar10 + 0x10) = 1;
    }
    if (*(long *)(lVar10 + 0x20) == 0) goto LAB_01f08e4c;
    if ((*(char *)(*(long *)(lVar10 + 0x20) + 0x74) != '\0') || (*(int *)(param_1 + 0x7c) != -1)) {
      plVar5 = *(long **)(param_1 + 0x88);
      if (plVar5 == (long *)0x0) goto LAB_01f08e4c;
      (**(code **)(*plVar5 + 0x2b8))(plVar5,*(undefined8 *)(*plVar5 + 0x2c0));
    }
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 == (long *)0x0) {
LAB_01f08e4c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar6 = (**(code **)(*plVar5 + 0x2f8))(plVar5,*(undefined8 *)(*plVar5 + 0x300));
  puVar3 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_JsonParser_JsonValue>_get_Value__;
  puVar1 = Method_System_Collections_Generic_List_Enumerator<RaycastResult>_MoveNext__;
  if ((uVar6 & 1) != 0) {
    do {
      plVar5 = *(long **)(param_1 + 0x50);
      if (plVar5 == (long *)0x0) goto LAB_01f08e4c;
      lVar10 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      if (lVar10 != *(long *)(param_1 + 0xc0)) {
        plVar5 = *(long **)(param_1 + 0x50);
        if (plVar5 == (long *)0x0) goto LAB_01f08e4c;
        lVar10 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
        if (lVar10 != *(long *)(param_1 + 0xd0)) {
          if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01f34e28(*(long *)(param_1 + 0x50),0,0);
          plVar5 = *(long **)(param_1 + 0x50);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar4 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
          plVar5 = *(long **)(param_1 + 0x50);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar7 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
          plVar5 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar3);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01f75d58(plVar5,uVar4,uVar7,0);
          local_54[0] = *(int *)(param_1 + 0xb8) == 1;
          if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar10 = FUN_01e9293c(*(long *)(param_1 + 0x48),
                                *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20),plVar5,local_54,0)
          ;
          if (lVar10 == 0) {
            if (local_54[0] == '\0') {
              if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if ((*(long *)(*(long *)(param_1 + 0x60) + 0x20) == 0) &&
                 (*(int *)(param_1 + 0xb8) == 3)) {
                lVar10 = plVar5[3];
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(int *)(lVar10 + 0x10) != 0) {
                  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  uVar6 = FUN_01e9257c(*(long *)(param_1 + 0x48),lVar10,0);
                  if ((uVar6 & 1) != 0) {
                    uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
                    FUN_01fadc24(param_1,*(undefined8 *)puVar2,uVar4,0);
                    goto LAB_01f08c04;
                  }
                }
              }
              uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
              FUN_01fae0f8(param_1,*(undefined8 *)puVar1,uVar4,1,0);
            }
          }
          else {
            if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar11 = *(long *)(*(long *)(param_1 + 0x60) + 0x20);
            if ((lVar11 != 0) &&
               ((*(char *)(lVar11 + 0x74) != '\0' || (*(int *)(param_1 + 0x7c) != -1)))) {
              plVar5 = *(long **)(param_1 + 0x88);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              (**(code **)(*plVar5 + 0x2a8))
                        (plVar5,*(undefined8 *)(lVar10 + 0x10),lVar10,
                         *(undefined8 *)(*plVar5 + 0x2b0));
            }
            if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01f34e28(*(long *)(param_1 + 0x50),*(undefined8 *)(lVar10 + 0x28),0);
            if (*(long *)(lVar10 + 0x30) != 0) {
              plVar5 = *(long **)(param_1 + 0x50);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar4 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
              FUN_01f09430(param_1,uVar4,lVar10);
            }
            if (*(int *)(param_1 + 0x7c) != -1) {
              plVar5 = *(long **)(param_1 + 0x50);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar4 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
              plVar5 = *(long **)(param_1 + 0x50);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar7 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
              if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar8 = FUN_01f34e44(*(long *)(param_1 + 0x50),0);
              plVar5 = *(long **)(param_1 + 0x50);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar9 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
              FUN_01f0a700(param_1,uVar4,uVar7,uVar8,uVar9,lVar10);
            }
          }
        }
      }
LAB_01f08c04:
      plVar5 = *(long **)(param_1 + 0x50);
      if (plVar5 == (long *)0x0) goto LAB_01f08e4c;
      uVar6 = (**(code **)(*plVar5 + 0x308))(plVar5,*(undefined8 *)(*plVar5 + 0x310));
    } while ((uVar6 & 1) != 0);
    plVar5 = *(long **)(param_1 + 0x50);
    if (plVar5 == (long *)0x0) goto LAB_01f08e4c;
    (**(code **)(*plVar5 + 0x318))(plVar5,*(undefined8 *)(*plVar5 + 800));
  }
  return;
}


