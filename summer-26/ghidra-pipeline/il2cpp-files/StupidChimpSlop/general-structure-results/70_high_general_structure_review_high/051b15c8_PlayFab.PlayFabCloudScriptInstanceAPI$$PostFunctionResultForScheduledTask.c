/*
FUNCTION_NAME: PlayFab.PlayFabCloudScriptInstanceAPI$$PostFunctionResultForScheduledTask
ENTRY_POINT: 051b15c8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void PlayFab_PlayFabCloudScriptInstanceAPI__PostFunctionResultForScheduledTask(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int in_w8;
  long unaff_x21;
  int iVar7;
  int unaff_w25;
  long in_stack_00000018;
  long in_stack_00000028;
  
  if (0 < in_w8) {
    return;
  }
                    /* try { // try from 051b15e0 to 052b15eb has its CatchHandler @ 051b182c */
  if (*(int *)(*(long *)PlayFab_EconomyModels_SearchItemsRequest_var + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar3 = FUN_051b4148();
                    /* try { // try from 051b15f8 to 052b1617 has its CatchHandler @ 051b1838 */
  if ((lVar3 != 0) && (FUN_051d45d8(lVar3,0,0), in_stack_00000028 != 0)) {
    thunk_FUN_051db040(lVar3,*(undefined4 *)(in_stack_00000028 + 0x30),0);
                    /* try { // try from 051b161c to 052b161f has its CatchHandler @ 051b18e4 */
                    /* try { // try from 051b1620 to 052b1623 has its CatchHandler @ 051b18e0 */
    uVar4 = FUN_051d45c8(lVar3,0);
                    /* try { // try from 051b1624 to 052b1627 has its CatchHandler @ 051b18c8 */
                    /* try { // try from 051b1628 to 052b162b has its CatchHandler @ 051b18c4 */
    if (in_stack_00000028 != 0) {
                    /* try { // try from 051b162c to 052b162f has its CatchHandler @ 051b18c0 */
      iVar7 = *(int *)(in_stack_00000028 + 0x24);
                    /* try { // try from 051b1630 to 052b1633 has its CatchHandler @ 051b18bc */
                    /* try { // try from 051b1634 to 052b164b has its CatchHandler @ 051b18b0 */
      while (iVar7 < *(int *)(in_stack_00000028 + 0x28) + *(int *)(in_stack_00000028 + 0x24)) {
                    /* try { // try from 051b164c to 052b1653 has its CatchHandler @ 051b1878 */
        uVar5 = FUN_051ad6a8();
        if ((uVar5 & 1) == 0) {
                    /* try { // try from 051b1798 to 052b17a3 has its CatchHandler @ 051b1850 */
          thunk_FUN_02db45e8(PTR_DAT_06647b18);
                    /* try { // try from 051b17a4 to 052b17bf has its CatchHandler @ 051b1848 */
          uVar4 = thunk_FUN_02d8a638();
          uVar6 = thunk_FUN_02db45e8(UnityEngine_UI_Slider_var);
                    /* try { // try from 051b17c0 to 052b17e3 has its CatchHandler @ 051b1828 */
          FUN_0503a078(uVar4,uVar6,0);
          uVar6 = thunk_FUN_02db45e8(UnityEngine_SliderHandler_var);
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar4,uVar6);
        }
                    /* try { // try from 051b166c to 052b1673 has its CatchHandler @ 051b1868 */
                    /* try { // try from 051b1674 to 052b1697 has its CatchHandler @ 051b1864 */
        if ((((in_stack_00000018 == 0) || (*(long *)(in_stack_00000018 + 0x58) == 0)) ||
            (uVar6 = FUN_051d45c8(*(long *)(in_stack_00000018 + 0x58),0), in_stack_00000018 == 0))
           || (*(long *)(in_stack_00000018 + 0x58) == 0)) goto LAB_051b1700;
        uVar1 = *(undefined4 *)(in_stack_00000018 + 0x34);
        uVar2 = FUN_051d4668(*(long *)(in_stack_00000018 + 0x58),0);
                    /* try { // try from 051b1698 to 052b16bf has its CatchHandler @ 051b184c */
        FUN_0502fc24(uVar6,0,uVar4,uVar1,uVar2,0);
                    /* try { // try from 051b16c0 to 052b16c3 has its CatchHandler @ 051b18b4 */
                    /* try { // try from 051b16cc to 052b16e3 has its CatchHandler @ 051b1898 */
        if (((in_stack_00000018 == 0) || (FUN_051b1834(), in_stack_00000018 == 0)) ||
           (FUN_051ad720(), in_stack_00000018 == 0)) goto LAB_051b1700;
                    /* try { // try from 051b16e4 to 052b16eb has its CatchHandler @ 051b186c */
        if (0 < *(int *)(in_stack_00000018 + 0x2c)) {
          FUN_051b18a0();
        }
        iVar7 = iVar7 + 1;
        if (in_stack_00000028 == 0) goto LAB_051b1700;
      }
                    /* try { // try from 051b1704 to 052b170b has its CatchHandler @ 051b1858 */
                    /* try { // try from 051b170c to 052b172f has its CatchHandler @ 051b1854 */
      FUN_051d44f8(lVar3,(long)*(int *)(in_stack_00000028 + 0x30),0);
      if (in_stack_00000028 != 0) {
        *(long *)(in_stack_00000028 + 0x58) = lVar3;
        thunk_FUN_02dc1ef0((long *)(in_stack_00000028 + 0x58),lVar3);
        if (in_stack_00000028 != 0) {
                    /* try { // try from 051b1730 to 052b1757 has its CatchHandler @ 051b1844 */
          *(int *)(in_stack_00000028 + 0x54) =
               *(int *)(in_stack_00000028 + 0x30) + *(int *)(in_stack_00000028 + 0x28) * 0xc;
          if (unaff_w25 == 8) {
            if (*(long *)(unaff_x21 + 0x18) != 0) {
              FUN_03936fd4(*(long *)(unaff_x21 + 0x18),*(undefined4 *)(in_stack_00000028 + 0x24),
                           in_stack_00000028,
                           *(undefined8 *)System_Resources_SatelliteContractVersionAttribute_var);
              return;
            }
          }
          else {
                    /* try { // try from 051b1774 to 052b1797 has its CatchHandler @ 051b1870 */
            if (*(long *)(unaff_x21 + 0x28) != 0) {
              FUN_03a8badc(*(long *)(unaff_x21 + 0x28),in_stack_00000028,
                           *(undefined8 *)System_Xml_Linq_SaveOptions_var);
              return;
            }
          }
        }
      }
    }
  }
LAB_051b1700:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


