/*
FUNCTION_NAME: Fusion.JsonUtilityExtensions.TypeSerializerDelegate$$EndInvoke
ENTRY_POINT: 04911ed0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04911ef8) */

void Fusion_JsonUtilityExtensions_TypeSerializerDelegate__EndInvoke(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  long unaff_x25;
  undefined1 unaff_w26;
  long *unaff_x27;
  double dVar6;
  undefined8 uVar7;
  double unaff_d8;
  double unaff_d9;
  
  while (unaff_x19[0x21] != 0) {
    FUN_0491ebfc(unaff_x19[0x21],0);
    if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d540(unaff_x23);
    }
    do {
      do {
        uVar5 = FUN_04956d8c();
        if ((uVar5 & 1) == 0) {
          FUN_04858464(0);
          return;
        }
        lVar3 = FUN_04956d04();
        if (*(char *)(unaff_x25 + 0xf6e) == '\0') {
          FUN_03d2d2b0();
          FUN_03d2d2b0();
          *(undefined1 *)(unaff_x25 + 0xf6e) = unaff_w26;
        }
        if ((unaff_x19[0x16] == 0) ||
           (lVar4 = FUN_06a627b8(unaff_x19[0x16],*(int *)(lVar3 + 0x18) >> 0x10,*unaff_x20),
           lVar4 == 0)) goto LAB_04911fa4;
        uVar5 = FUN_04955c94(*(undefined8 *)(lVar4 + 0xd8),*(undefined8 *)(lVar3 + 0x18),0);
      } while ((uVar5 & 1) == 0);
      FUN_04866334(*(long *)(lVar4 + 0xd0) == lVar3,*unaff_x21,0);
      dVar6 = (double)FUN_0495da30(unaff_x19[0x26],lVar3,0);
    } while ((unaff_d8 <= dVar6) &&
            (dVar6 = (double)FUN_04959efc(unaff_x19[0x26],0),
            dVar6 - *(double *)(lVar4 + 0x78) < unaff_d9));
    if (unaff_x19[0x21] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar5 = FUN_0491e928(unaff_x19[0x21],lVar4,(int)unaff_x19[9],0);
    if ((uVar5 & 1) == 0) {
      unaff_x23 = 0;
    }
    else {
      FUN_0491267c();
      (**(code **)(*unaff_x19 + 0x298))();
      if (unaff_x19[0x1c] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (unaff_x19[0x21] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar3 = *(long *)(unaff_x19[0x1c] + 0x10);
      uVar1 = *(undefined4 *)(*(long *)(unaff_x19[0x21] + 0x20) + 0x50);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      iVar2 = FUN_0485b630(uVar1,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_0494819c((float)iVar2,lVar3,0,0);
      if (unaff_x19[0x21] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_0491eb58(unaff_x19[0x21],0);
      uVar7 = FUN_04959efc(unaff_x19[0x26],0);
      unaff_x23 = 0;
      *(undefined8 *)(lVar4 + 0x78) = uVar7;
    }
  }
LAB_04911fa4:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


