/*
FUNCTION_NAME: Sentry.MetricAggregator.<GetFlushableBuckets>d__34$$System.IDisposable.Dispose
ENTRY_POINT: 075ae794
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Sentry_MetricAggregator_<GetFlushableBuckets>d__34__System_IDisposable_Dispose(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int in_w9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar6;
  long *unaff_x22;
  undefined8 *unaff_x25;
  
  if (in_w9 == 0) {
    thunk_FUN_03f6fea8();
  }
  plVar1 = (long *)FUN_074c4a14();
  plVar2 = (long *)FUN_03f13470(*unaff_x25,1);
  if (plVar2 != (long *)0x0) {
    lVar6 = *(long *)(unaff_x21 + 0xc0);
    if ((lVar6 != 0) &&
       (lVar3 = thunk_FUN_03f4e590(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_075ae970:
      uVar5 = thunk_FUN_03f5c134();
                    /* WARNING: Subroutine does not return */
      FUN_03f134f0(uVar5,0);
    }
    if ((int)plVar2[3] == 0) {
LAB_075ae96c:
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    plVar2[4] = lVar6;
    thunk_FUN_03f86000(plVar2 + 4,lVar6);
    if (plVar1 != (long *)0x0) {
      lVar6 = (**(code **)(*plVar1 + 0x9b8))(plVar1,plVar2,*(undefined8 *)(*plVar1 + 0x9c0));
      lVar3 = *unaff_x22;
      plVar1 = (long *)FUN_03f13470(*unaff_x25,1);
      if (plVar1 != (long *)0x0) {
        if ((lVar6 != 0) &&
           (lVar4 = thunk_FUN_03f4e590(lVar6,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
        goto LAB_075ae970;
        if ((int)plVar1[3] == 0) goto LAB_075ae96c;
        plVar1[4] = lVar6;
        thunk_FUN_03f86000(plVar1 + 4,lVar6);
        if (lVar3 != 0) {
          uVar5 = FUN_074d0954(lVar3,plVar1,0);
          if (*(int *)(*(long *)PTR_DAT_09120f00 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_09120f00);
          }
          plVar1 = (long *)FUN_075c5d74(0);
          if (plVar1 != (long *)0x0) {
            lVar6 = (**(code **)(*plVar1 + 0x188))(plVar1,uVar5,*(undefined8 *)(*plVar1 + 400));
            *unaff_x20 = lVar6;
            thunk_FUN_03f86000();
            lVar3 = *unaff_x20;
            lVar6 = FUN_03f13470(*(undefined8 *)PTR_DAT_0910c888,1);
            if (lVar6 != 0) {
              if ((unaff_x19 != 0) && (lVar4 = thunk_FUN_03f4e590(), lVar4 == 0)) goto LAB_075ae970;
              if (*(int *)(lVar6 + 0x18) == 0) goto LAB_075ae96c;
              *(long *)(lVar6 + 0x20) = unaff_x19;
              thunk_FUN_03f86000();
              if (lVar3 != 0) {
                lVar6 = (**(code **)(lVar3 + 0x18))
                                  (*(undefined8 *)(lVar3 + 0x40),lVar6,*(undefined8 *)(lVar3 + 0x28)
                                  );
                if (lVar6 != 0) {
                  uVar5 = *(undefined8 *)PTR_DAT_09138a70;
                  lVar3 = thunk_FUN_03f4e590(lVar6,uVar5);
                  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f139ac(lVar6,uVar5);
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


