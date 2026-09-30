/*
FUNCTION_NAME: Fusion.JsonUtilityExtensions.TypeSerializerDelegate$$BeginInvoke
ENTRY_POINT: 04911eb0
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
/* WARNING: Removing unreachable block (ram,0x04911fa8) */

void Fusion_JsonUtilityExtensions_TypeSerializerDelegate__BeginInvoke(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x25;
  undefined1 unaff_w26;
  long *unaff_x27;
  double dVar5;
  undefined8 uVar6;
  double unaff_d8;
  double unaff_d9;
  
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_0491eb58(param_1,0);
    uVar6 = FUN_04959efc(unaff_x19[0x26],0);
    *(undefined8 *)(unaff_x22 + 0x78) = uVar6;
    do {
      if (unaff_x19[0x21] == 0) {
LAB_04911fa4:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_0491ebfc(unaff_x19[0x21],0);
      do {
        do {
          uVar4 = FUN_04956d8c();
          if ((uVar4 & 1) == 0) {
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
             (unaff_x22 = FUN_06a627b8(unaff_x19[0x16],*(int *)(lVar3 + 0x18) >> 0x10,*unaff_x20),
             unaff_x22 == 0)) goto LAB_04911fa4;
          uVar4 = FUN_04955c94(*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(lVar3 + 0x18),0);
        } while ((uVar4 & 1) == 0);
        FUN_04866334(*(long *)(unaff_x22 + 0xd0) == lVar3,*unaff_x21,0);
        dVar5 = (double)FUN_0495da30(unaff_x19[0x26],lVar3,0);
      } while ((unaff_d8 <= dVar5) &&
              (dVar5 = (double)FUN_04959efc(unaff_x19[0x26],0),
              dVar5 - *(double *)(unaff_x22 + 0x78) < unaff_d9));
      if (unaff_x19[0x21] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar4 = FUN_0491e928(unaff_x19[0x21],unaff_x22,(int)unaff_x19[9],0);
    } while ((uVar4 & 1) == 0);
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
    param_1 = unaff_x19[0x21];
  } while( true );
}


