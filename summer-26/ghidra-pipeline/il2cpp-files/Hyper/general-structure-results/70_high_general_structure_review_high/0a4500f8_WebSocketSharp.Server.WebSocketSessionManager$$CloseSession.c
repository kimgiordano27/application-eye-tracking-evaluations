/*
FUNCTION_NAME: WebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 0a4500f8
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void WebSocketSharp_Server_WebSocketSessionManager__CloseSession(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 in_w8;
  int iVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined4 uVar7;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  *(undefined1 *)(unaff_x21 + 0x925) = in_w8;
  _uStack0000000000000018 = 0;
  uVar2 = FUN_0a44fcf4();
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_0ac0e6f8 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar3 = FUN_0a476fa0(0);
  uVar4 = FUN_0a178414();
  if (lVar3 == 0) goto LAB_0a4502c0;
  FUN_0a47739c(lVar3,uVar4);
  lVar3 = unaff_x20[0x3a];
  FUN_0a46242c();
  uVar2 = FUN_0a186cd4(0);
  if ((((uVar2 & 1) != 0) && ((char)unaff_x20[0x42] == '\0')) &&
     ((unaff_x20[0x20] == 0 || (uVar2 = FUN_0a1872f4(unaff_x20[0x20],0), (uVar2 & 1) == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x0a4502bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x20 + 0x378))();
    return;
  }
  if ((char)lVar3 != '\0') {
                    /* try { // try from 0a450184 to 0a55018b has its CatchHandler @ 0a4501f0 */
                    /* try { // try from 0a450194 to 0a55019f has its CatchHandler @ 0a4501ec */
    if ((unaff_x20[0x21] == 0) ||
       (uVar4 = FUN_0a26c890(unaff_x20[0x21],0), unaff_x19 == (long *)0x0)) goto LAB_0a4502c0;
    lVar3 = unaff_x19[0x22];
                    /* try { // try from 0a4501a0 to 0a550203 has its CatchHandler @ 0a45008c */
    uVar7 = *(undefined4 *)((long)unaff_x19 + 0x114);
    uVar5 = FUN_0a4726c4();
    if (*(int *)(*(long *)PTR_DAT_0ac55460 + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)PTR_DAT_0ac55460);
    }
    FUN_0a448244((int)lVar3,uVar7,uVar4,uVar5,&stack0x00000018,0);
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 0a450194 with catch @ 0a4501ec
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 0a450184 with catch @ 0a4501f0
                        */
    iVar1 = FUN_0a44f8fc(uStack0000000000000018,uStack000000000000001c);
    iVar1 = *(int *)((long)unaff_x20 + 0x1e4) + iVar1;
    *(int *)((long)unaff_x20 + 0x194) = iVar1;
                    /* try { // try from 0a450204 to 0a550207 has its CatchHandler @ 0a450270 */
    if (iVar1 < 0) {
      iVar6 = 0;
      *(undefined4 *)((long)unaff_x20 + 0x194) = 0;
      *(int *)(unaff_x20 + 0x33) = iVar1;
    }
    else {
                    /* try { // try from 0a450208 to 0a550273 has its CatchHandler @ 0a45008c */
      lVar3 = unaff_x20[0x30];
      if (lVar3 == 0) goto LAB_0a4502c0;
      if (*(int *)(lVar3 + 0x10) < iVar1) {
        *(int *)((long)unaff_x20 + 0x194) = *(int *)(lVar3 + 0x10);
      }
      iVar6 = *(int *)(lVar3 + 0x10);
      *(int *)(unaff_x20 + 0x33) = iVar1;
      if (iVar1 <= iVar6) goto LAB_0a45024c;
    }
    *(int *)(unaff_x20 + 0x33) = iVar6;
  }
LAB_0a45024c:
  FUN_0a44bb94();
  FUN_0a44dbdc();
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x188))();
    return;
  }
LAB_0a4502c0:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


