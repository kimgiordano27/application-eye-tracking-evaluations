/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VxXmppErrorBadRequest_get
ENTRY_POINT: 078835fc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxXmppErrorBadRequest_get(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *unaff_x23;
  undefined8 uVar10;
  long *unaff_x25;
  undefined8 in_stack_00000018;
  
  FUN_05fa0540();
  FUN_0675ff58(*unaff_x23,0);
  FUN_05fa0540();
  *(undefined8 *)(unaff_x19 + 0xe) = unaff_x21;
  thunk_FUN_03afed3c();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 8);
  uVar2 = FUN_07882fe0();
  lVar3 = FUN_0786febc(uVar8,uVar2);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar9 = *(long **)(unaff_x20 + 0x10);
  uVar2 = FUN_065c0764(*(undefined8 *)(lVar3 + 0x10),
                       *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x18),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar8 = FUN_0787dcfc(uVar2,*(undefined8 *)(unaff_x20 + 0x18),lVar3);
  uVar5 = 10;
  if ((*(ulong *)(lVar3 + 0x18) & 0xff) != 0) {
    uVar5 = (undefined4)(*(ulong *)(lVar3 + 0x18) >> 0x20);
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0(10);
  }
  lVar3 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  uVar10 = *(undefined8 *)PTR_DAT_084c7fc0;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)
           System_Collections_Generic_IEnumerator<RoomServerOptionsInvalid_ValidationError>_TypeInfo
         ) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxXmppErrorNotAllowed_get;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_03ac43c4(plVar9,*(long *)
                                System_Collections_Generic_IEnumerator<RoomServerOptionsInvalid_ValidationError>_TypeInfo
                        ,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxXmppErrorNotAllowed_get:
  lVar3 = (*(code *)*puVar4)(plVar9,uVar10,uVar2,0,uVar8,uVar5,puVar4[1]);
  if (lVar3 != 0) {
    in_stack_00000018 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             System_Collections_Generic_IEnumerator<CultureInfo>_TypeInfo);
    uVar6 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_IEnumerator<Claim>_TypeInfo);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fee640(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar2 = FUN_0587c704(&stack0x00000018,
                           *(undefined8 *)System_Collections_Generic_IEnumerator<char>_TypeInfo);
      uVar8 = FUN_04719738(uVar2,*(undefined8 *)(unaff_x19 + 0xe),
                           *(undefined8 *)System_Collections_Generic_IList<Group>_TypeInfo);
      uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                   System_Collections_Generic_IList<IDtdDefaultAttributeInfo>_TypeInfo
                                 );
      FUN_057509cc(uVar10,uVar2,uVar8,
                   *(undefined8 *)System_Collections_Generic_IList<IDataNode>_TypeInfo);
      puVar1 = System_Collections_Generic_IList<Graphic>_TypeInfo;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar10,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


